#include <stdio.h>
#include <math.h>

float price(float base, float tax) {
  float before_rounding;

  // handle negative numbers
  if (base < 0.0 || tax < 0.0) {
    before_rounding = 0.0;
  } else {
    before_rounding = base + (base * tax);
  }

  float rounded_up = ceilf(before_rounding * 100) / 100;
  printf("Price with tax is: %.2f \n", rounded_up);
  return rounded_up;
}

int main() {
  float cases[6][2] = {{29.89, 0.06}, {11012.12, 0.09}, {-8930.234},
  {26.12, -.02}, {0.0, 0.08}, {18.23, 0.0}};
  float p, t, f;
  int i = 0;

  printf("Please enter a price:\n");
  scanf("%f", &p);
  printf("Please enter the tax:\n");
  scanf("%f", &t);

  f = price(p, t);
  printf("Your price with tax: %.2f.\n", f);
  printf("~~ TESTS BELOW ~~\n");
  for (; i < 6; i++) {
    price(cases[i][0], cases[i][1]);
  }

  return 0;
}
