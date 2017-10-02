#include <stdio.h>
#include <math.h>

#define GRAVITY 32.0

float ball_drop(int height) {
  float result;
  if (height <= 0) {
    return 0;
  }

  result = sqrt((2.0 * (double)height) / GRAVITY);
  return result;
}

int main() {
  int input;
  float result;

  for (int i = 0; i < 5; i++) {
    printf("Please enter a height to drop a ball from:\n");
    scanf("%d", &input);
    result = ball_drop(input);
    printf ("It will take %f seconds to drop a ball from %i feet\n", result, input);
  }

  return 0;
}
