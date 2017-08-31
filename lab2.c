#include <stdio.h>

int equal_itoi(int expect, int act) {
  if (expect == act) {
    return 1;
  } else {
    return 0;
  }
}

int equal_ftof(float expect, float act) {
  if (expect == act) {
    return 1;
  } else {
    return 0;
  }
}

int product(int a, int b) {
  return a * b;
}

float quotient(float a, float b) {
  float c;
  c = a / b;

  printf("Floats (a,b) and quotient(c) are : %d, %d, %d\n", a, b, c);
  return c;
}


int main () {
  /* variable definition: */
  int a, b, c;

  /* variable initialization */
  a = 10;
  b = 20;
  c = a + b;
  printf("Integers (a,b) and sum (c) are : %d,%d,%d \n", a,b,c);

  int cases1[4][3] = {{12, 7, 84}, {1, 23, 23}, {-14,5, -70}, {-10, 0}};
 	int i;

 	for (i = 0; i < 4; i++) {
 		int a = cases1[i][0];
 		int b = cases1[i][1];
 		int expected = cases1[i][2];
 		int res = product(a, b);

 		if (equal_itoi(expected, res) == 1) {
 			printf("The product of %d and %d is %d.\n", a, b, res);
 		} else {
 			printf("Test Failed! Expected %d, but got %d\n", expected);
 		}
 	}

  float d = 31.4;
  float e = 22.1;
  float f = d / e;

  printf("%f divided by %f is %f.\n", d, e, f);

  return 0;
}
