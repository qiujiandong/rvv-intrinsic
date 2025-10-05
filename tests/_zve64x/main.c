#include <riscv_vector.h>
#include <rvv_intrinsic.h>

int main() {
  int64_t *px, *py;
  size_t vl = 4;
  vint64m1_t vx = __riscv_vle64_v_i64m1(px, vl);
  vx = __riscv_vadd_vv_i64m1(vx, vx, vl);
  __riscv_vse64_v_i64m1(py, vx, vl);
  return 0;
}