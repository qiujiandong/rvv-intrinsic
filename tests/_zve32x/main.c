#include <riscv_vector.h>

int main() {
  vint32m1_t vx;
  int32_t *px;

  vx = __riscv_vle32_v_i32m1(px, 1);
  return 0;
}
