#include <stdio.h>
#include <math.h>

float perimeter(float base, float height) {
    // handle edge case (only pass one argument) by making same as height
    if (height == 0) {
      height = base;
    }

    double hypotenuse = sqrt(pow((double)base, 2.0) + pow((double)height, 2.0));
    // formula according to google
    return base + height + (float)hypotenuse;
}

int main () {
  /* variable definition: */
  float base, height, area;
  /* Prompt user for base */
  printf("Enter the base of the triangle: \n"); // Input the base
  scanf("%f", &base);
  /* Prompt user for height */
  printf("Enter the height of the triangle: \n"); // Input the base
  scanf("%f", &height);
  // Calculate the Area
  area = 0.5 * (base * height);
  // Print the result
  printf("Area is : %f\n", area);
  printf("Perimeter is: %f\n", perimeter(base, height));

  return 0;
}
