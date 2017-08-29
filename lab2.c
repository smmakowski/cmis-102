#include <stdio.h>

int product(int a, int b) {
  int c;
  c = a * b;

  printf("Integers (a,b) and product(c) are : %d, %d, %d\n", a, b, c);
  return c;
}

float quotient(float a, float b) {
  float c;
  c = a / b;

  printf("Floats (a,b) and quotient(c) are : %d, %d, %d\n", a, b, c);
}

int main () {
  /* variable definition: */
  int a, b, c;

  /* variable initialization */
  a = 10;
  b = 20;
  c = a + b;
  printf("Integers (a,b) and sum (c) are : %d,%d,%d \n", a,b,c);
   return 0;
}
