#include <stdio.h>

int Square(int value);
int Cube(int value);
double Shrink(int value);
double To_Celsius(int value);

int main () {
  /* variable definition: */
  int intValue, menuSelect,Results;
  double doubleResults;
  intValue = 1;
  // While a positive number
  while (intValue > 0) {
    printf ("Enter a positive Integer\n: ");
    scanf("%d", &intValue);
    if (intValue > 0) {
     printf ("Enter 1 to calculate Square, 2 to Calculate Cube, 3 to Shrink (divide by 2), or 4 to Convert from Farenheit to Celsius:\n");
     scanf("%d", &menuSelect);
    }
    if (menuSelect == 1) {
     // Call the Square Function
     Results = Square(intValue);
     printf("Square of %d is %d\n",intValue,Results);
    } else if (menuSelect == 2) {
     // Call the Cube function
     Results = Cube(intValue);
     printf("Cube of %d is %d\n",intValue,Results);
    } else if (menuSelect == 3) {
     doubleResults = Shrink(intValue);
     printf("%d shrank is %f\n", intValue, doubleResults);
    } else if (menuSelect == 4) {
     doubleResults = To_Celsius(intValue);
     printf("%d Degrees Farenheit is %f Degrees Celsius\n", intValue, doubleResults);
    } else {
     printf("Invalid menu item, only 1, 2, 3 or 4 is accepted\n");
    }
  }
  return 0;
}

/* function returning the Square of a number */
int Square(int value) {
  return value * value;
}

/* function returning the Cube of a number */
int Cube(int value) {
   return value * value * value;
}

double Shrink(int value) {
  return (double)value / 2.0;
}

double To_Celsius(int value) {
  return ((double)value * 1.8) + 32.0;
}
