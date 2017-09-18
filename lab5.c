#include <stdio.h>

int main () {
  int count, value, sum;
  double avg;

  count = 0;
  sum = 0;
  avg = 0.0;

  while (count < 20) {
    //printf("Enter a positive Integer\n");
    scanf("%d", &value);
    if (value >= 0) {
      sum = sum + value;
      count = count + 1;
    } else {
       printf("Value must be positive\n");
     }
  }
  avg = (double) sum/count;
  printf("average is %lf\n " , avg );

  return 0;
}
