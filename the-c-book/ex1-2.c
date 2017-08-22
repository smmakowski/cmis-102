// Exercise 1.2 Print out prime number pairs
// inputs: integer n, highest number to check
// outputs: prime pairs up to n

#include <stdio.h>
#include <stdlib.h>
#define TESTARRLEN 5

// function to test equality of integers
int is_equal(int actual, int expected) {
  if (actual == expected) {
    return 1;
  } else {
    printf("Expected %d to equal %d", res, expected);
    return 0;
  }
}

// Helper functions
int is_prime(int n) {
  if (n < 2) {
    return 0;
  }

  int i;
  i = 2;

  while (i < n) {
    if (n % i == 0) {
      return 0;
    }
    i = i + 1;
  }

  return 1;
}

int is_prime_pair(int a, int b) {
  if (is_prime(a) == 1 && is_prime(b) == 1 && b - a == 2) {
    return 1;
  } else {
    return 0;
  }
}
// Automated tests for above functions
int test_is_prime(void) {
  int cases[5][2] = {{1, 0}, {3, 1}, {27, 0}, {29, 1}, {13, 1}};
  int acceptable = 1;
  int i;

  for (i = 0; i < TESTARRLEN; i++) {
    int res = is_prime(cases[i][0]);
    int expected = cases[i][1];

    if (is_equal(res, expected) == 0) {
      acceptable = 0;
    }
  }

  if (acceptable == 0) {
    printf("is_prime did not pass test cases, please refactor!\n");
    exit(0);
  }
  printf("is_prime passed all test cases! Proceeding with program\n");
  return acceptable;
}

int test_is_prime_pair(void) {
  int cases[TESTARRLEN][3] = {{11, 13, 1}, {29, 31, 1}, {2, 3, 0}, {1, 17, 0},
  {25, 27, 0}};
  int acc = 1;
  int i = 0;

  for (i = 0; i < TESTARRLEN; i++) {
    int res = is_prime_pair(cases[i][0], cases[i][1]);
    int expected = cases[i][2];

    if (is_equal(res, expected) == 0) {
      acceptable = 0;
    }
  }


}

int main() {
  test_is_prime();
  int n;
  int i;

  printf("Please enter a number\n");
  scanf("%d", &n);

}
