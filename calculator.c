#include "mathlib.h"
#include <stdio.h>

int main(void) {
  int x = 2;
  int y = 3;
  int x_y = x_to_y(x,y);
  printf("Running version %s of mathlib\n", mathlib_version);
  printf("%d^%d = %d\n", x, y, x_y);
  return 0;
}
