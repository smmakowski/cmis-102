#include <stdio.h>

int is_prime(int n) {
  if (n < 2) {
    return 0;
  }
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int i, n;
  i = 2;
  printf("Please enter a number:\n");
  scanf("%d", &n);
  if (n < 2) {
    printf("There are no prime numbers up to and including the number you entered.\n");
    return 0;
  }
  printf("The following numbers are prime numbers up to and including %d: \n", n);
  while (i <= n) {
    if (is_prime(i)) {
      printf("%d.\n", i);
    }
    i++;
  }
  return 0;
}
