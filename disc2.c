#include <stdio.h>

int main() {
  int n;
  int f;
  int r;
  printf("Please enter the nth number in the Fibonacci Sequence that you want to see:\n");
  scanf("%d", &n);
  if (n <= 0) {
    f = 0;
  } else if (n < 3) {
	f = 1;
  } else {
    int a[n];
    a[0] = 1;
    a[1] = 1;
    int i = 2;

    while (i < n) {
      a[i] = a[i - 1] + a[i -2];
      i++;
    }
    f = a[n - 1];
  }
  printf("The %dth Fibonnaci number is: %d.\n", n, f);
  r = f % 2;
  if (r == 0) {
    printf("The number is EVEN.\n");
  } else {
    printf("The number is ODD.\n");
  }
  return 0;
}
