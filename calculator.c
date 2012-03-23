/* 
 *  Copyright 2012 joeaintexas All Rights Rescinded.
 *  This software is hereby released to the public domain.
 */

#include "mathlib.h"
#include <stdio.h>

void func_x(void);
void func_y(void); // Added by master
void func_z(void); // Added by master

int main(void) {
  int x = 2;
  int y = 3;
  int x_y = x_to_y(x,y);
  printf("Running version %s of mathlib\n", mathlib_version);
  func_x();
  func_y();
  func_z();
  printf("%d^%d = %d\n", x, y, x_y);
  return 0;
}

void func_x(void) {
  printf("Now you're playing with Nintendo power.\n");
}

void func_y(void) {
  printf("Brought to you by, the master...\n");
}

void func_z(void) {
  printf("and no one else!");
}
