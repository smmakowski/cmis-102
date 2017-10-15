#include <stdio.h>
#define LEN 10

int main() {
  int num, max, min, diff, resp;
  int arr[LEN];

  for (int i = 0; i < LEN; i++) {
    printf("Please enter an integer:\n");
    scanf("%d", &resp);
    arr[i] = resp;
  }

  max = arr[0];
  min = arr[0];

  for (int j = 1; j < LEN; j++) {
    if (arr[j] > max) {
      max = arr[j];
    }
    if (arr[j] < min) {
      min = arr[j];
    }
  }

  diff = max - min;
  printf("The numbers you entered created the following array: {");
  for (int k = 0; k < LEN - 1; k++) {
    printf("%i, ", arr[k]);
  }
  printf("%i}.\n", arr[LEN -1]);
  printf("The difference between the max (%i) and min (%i) of the array is %i.\n", max, min, diff);

  return 0;
}
