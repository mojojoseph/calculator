#include "mathlib.h"
#include <stdio.h>

void func_x(void);

int main(void) {
  int x = 2;
  int y = 3;
  int x_y = x_to_y(x,y);
  printf("Running version %s of mathlib\n", mathlib_version);
  func_x();
  printf("%d^%d = %d\n", x, y, x_y);
  return 0;
}

void func_x(void) {
  printf("Now you're playing with Nintendo power.\n");
}
