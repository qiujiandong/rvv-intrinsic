#include <riscv_vector.h>

int main() {
  float16_t *px, *py;
  size_t vl = 4;
  vfloat16m1_t vf = __riscv_vle16_v_f16m1(px, vl);
  vf = __riscv_vfadd_vv_f16m1(vf, vf, vl);
  __riscv_vse16_v_f16m1(py, vf, vl);
  return 0;
}