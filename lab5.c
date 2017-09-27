#include <stdio.h>

int main () {
  int count, value, sum, max;
  double avg;

  count = 0;
  sum = 0;
  avg = 0.0;

  printf("Please enter the number of items you wish to average.\n");
  scanf("%d", &max);

  while (count < max) {
    scanf("%d", &value);
    if (value >= 0) {
      sum = sum + value;
      count = count + 1;
    } else {
       printf("Value must be positive\n");
     }
  }
  avg = (double) sum/count;
  printf("average is %.2lf\n " , avg );

  return 0;
}
