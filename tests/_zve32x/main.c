#include <riscv_vector.h>

int main() {
  int32_t *px;
  int32_t *py;
  size_t vl = 4;

  vint32m1_t vx = __riscv_vle32_v_i32m1(px, vl);
  vx = __riscv_vadd_vv_i32m1(vx, vx, vl);
  __riscv_vse32_v_i32m1(py, vx, vl);
  return 0;
}
