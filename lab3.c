// C code
// This program will calculate the area of a right triangle. // Developer: Faculty CMIS102
// Date: Jan 31, XXXX
#include <stdio.h>
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
  area= 0.5 * (base * height);
  // Print the result
  printf("Area is : %f\n", area);
  return 0;
}
