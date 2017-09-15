// C code
// This program will calculate the sum of 5 integers.
// Developer: Faculty CMIS102
// Date: Jan 31, XXXX
#include <stdio.h>
int main ()
{
/* variable definition: */
int value1,value2,value3,value4,value5,sum;

/* Initialize sum */
sum = 0;
printf("Enter an Integer for value1\n");
scanf("%d", &value1);
printf("Enter an Integer for value2\n");
scanf("%d", &value2);
printf("Enter an Integer for value3\n");
scanf("%d", &value3);
printf("Enter an Integer for value4\n");
scanf("%d", &value4);
printf("Enter an Integer for value5\n");
scanf("%d", &value5);
sum = value1 + value2 + value3 + value4 + value5;
printf("Sum is %d\n " , sum );
if (sum >100)
  printf("Sum is over 100\n");
return 0;
}
