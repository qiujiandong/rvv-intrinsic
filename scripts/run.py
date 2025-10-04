#!/usr/bin/env python3

import pathlib


def save_file(root, output_file: pathlib.Path, contents):
    content = "".join(s if s else "\n" for s in contents)
    relative_path = output_file.relative_to(root)
    path_str = relative_path.as_posix().upper()
    path_str = path_str.replace("/", "_").replace(".", "_").replace("-", "_")

    with open(output_file, "w", encoding="utf-8") as f:
        f.write(f"#ifndef {path_str}\n")
        f.write(f"#define {path_str}\n")

        f.write("\n#include <stdlib.h>\n")
        f.write("#include <stdint.h>\n")
        f.write("#include <riscv_vector.h>\n\n")

        f.write("typedef _Float16 float16_t;\n")
        f.write("typedef float float32_t;\n")
        f.write("typedef double float64_t;\n")

        f.write(content)

        f.write(f"#endif // #ifndef {path_str}")


if __name__ == "__main__":
    rvv_intrinsic_doc = pathlib.Path(__file__).parent.parent / "rvv-intrinsic-doc"
    assert rvv_intrinsic_doc.is_dir()

    source_file_paths = [
        "intrinsic_funcs",
        "overloaded_intrinsic_funcs",
        "policy_funcs/intrinsic_funcs",
        "policy_funcs/overloaded_intrinsic_funcs",
    ]
    source_paths = [rvv_intrinsic_doc / "auto-generated" / f for f in source_file_paths]
    target_path = pathlib.Path(__file__).parent.parent / "rvv_intrinsic"

    for source_path in source_paths:
        print(source_path)
        for file in source_path.iterdir():
            filename = file.name
            relative_path = file.relative_to(rvv_intrinsic_doc / "auto-generated")
            output_prefix = target_path / relative_path.parent

            # read file
            with open(file, "r", encoding="utf-8") as f:
                lines = f.readlines()

            # split data into five different data type
            content_f16 = []
            content_64d = []
            content_64f = []
            content_64x = []
            content_32f = []
            content_32x = []

            record_status = False
            for line in lines:
                if "----" in line:
                    content_f16.append("")
                    content_64d.append("")
                    content_64f.append("")
                    content_64x.append("")
                    content_32f.append("")
                    content_32x.append("")
                    record_status = not record_status
                    continue
                if record_status:
                    # `vsetvl` has defined in <riscv_vector.h>
                    if "vsetvl" in line:
                        continue
                    line = line.replace("unsigned int", "unsigned long")
                    if "float16" in line:
                        content_f16.append(line)
                    else:
                        if "float64" in line:
                            content_64d.append(line)
                        else:
                            if "float32" in line:
                                if (
                                    "f32mf2" in line
                                    or "i8mf8" in line
                                    or "u8mf8" in line
                                    or "i16mf4" in line
                                    or "u16mf4" in line
                                    or "i32mf2" in line
                                    or "u32mf2" in line
                                    or "int64" in line
                                    or "bool64" in line
                                ):
                                    content_64f.append(line)
                                else:
                                    content_32f.append(line)
                            else:
                                if (
                                    "i8mf8" in line
                                    or "u8mf8" in line
                                    or "i16mf4" in line
                                    or "u16mf4" in line
                                    or "i32mf2" in line
                                    or "u32mf2" in line
                                    or "int64" in line
                                    or "bool64" in line
                                ):
                                    content_64x.append(line)
                                else:
                                    content_32x.append(line)

            output_file = output_prefix / "zfh_zvfh_zve32f" / filename
            output_file = output_file.with_suffix(".h")
            output_file.parent.mkdir(parents=True, exist_ok=True)
            save_file(target_path, output_file, content_f16)

            output_file = output_prefix / "zve64d" / filename
            output_file = output_file.with_suffix(".h")
            output_file.parent.mkdir(parents=True, exist_ok=True)
            save_file(target_path, output_file, content_64d)

            output_file = output_prefix / "zve64f" / filename
            output_file = output_file.with_suffix(".h")
            output_file.parent.mkdir(parents=True, exist_ok=True)
            save_file(target_path, output_file, content_64f)

            output_file = output_prefix / "zve64x" / filename
            output_file = output_file.with_suffix(".h")
            output_file.parent.mkdir(parents=True, exist_ok=True)
            save_file(target_path, output_file, content_64x)

            output_file = output_prefix / "zve32f" / filename
            output_file = output_file.with_suffix(".h")
            output_file.parent.mkdir(parents=True, exist_ok=True)
            save_file(target_path, output_file, content_32f)

            output_file = output_prefix / "zve32x" / filename
            output_file = output_file.with_suffix(".h")
            output_file.parent.mkdir(parents=True, exist_ok=True)
            save_file(target_path, output_file, content_32x)
