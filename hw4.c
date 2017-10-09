#include <stdio.h>
#include <math.h>

#define GRAVITY 32.0

float ball_drop(int height) {
  float result;

  result = sqrt((2.0 * (double)height) / GRAVITY);
  return result;
}

int main() {
  int input;
  float result;
  int count = 0;
  
  printf("This program will allow you to calculate how many seconds it takes to drop a ball from n-feet for 5 valid inputs.\n");
  
  while (count < 5) {
    printf("Please enter a height (greater than 0) to drop a ball from:\n");
    scanf("%d", &input);

    if (input <= 0) {
        printf("Height cannot be 0 or less than 0\n");
    } else {
        result = ball_drop(input);
        printf ("It will take %f seconds to drop a ball from %i feet\n", result, input);
        count = count + 1;
    }
  }

  return 0;
}
