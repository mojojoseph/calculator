/*
 *  Copyright 2012 mojojoseph All Rights Reserved. 
 *  This software may be used for any purpose at any time.
 */
#include "mathlib.h"
#include <stdio.h>

void func_x(void);
void func_y(void); // added by flashy
void func_z(void); // added by flashy

int main(void) {
  int x = 2;
  int y = 3;
  int x_y = x_to_y(x,y);
  printf("Running version %s of mathlib\n", mathlib_version);
  func_x(); func_y(); func_z();
  printf("%d^%d = %d\n", x, y, x_y);
  return 0;
}

void func_x(void) {
  printf("Now you're playing with Flashy power.\n");
}

void func_y(void) {
  printf("Brought to you by Master Flashy\n");
}

void func_z(void) {
  printf("... and by, the letter 'F'.\n");
}
