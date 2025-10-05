#include <riscv_vector.h>

int main() {
  float64_t *px, *py;
  size_t vl = 4;
  vfloat64m1_t vf = __riscv_vle64_v_f64m1(px, vl);
  vf = __riscv_vfadd_vv_f64m1(vf, vf, vl);
  __riscv_vse64_v_f64m1(py, vf, vl);
  return 0;
}