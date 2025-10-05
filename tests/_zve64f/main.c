#include <riscv_vector.h>

int main() {
  float32_t *px, *py;
  size_t vl = 4;
  vfloat32m1_t vf = __riscv_vle32_v_f32m1(px, vl);
  vf = __riscv_vfadd_vv_f32m1(vf, vf, vl);
  __riscv_vse32_v_f32m1(py, vf, vl);
  return 0;
}