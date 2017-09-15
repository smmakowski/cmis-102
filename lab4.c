#include <stdio.h>
int main () {
  int value1,value2,value3,value4,value5,
  value6, value7, value8, value9, value10,
  sum;

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
  printf("Enter an Integer for value6\n");
  scanf("%d", &value6);
  printf("Enter an Integer for value7\n");
  scanf("%d", &value7);
  printf("Enter an Integer for value8\n");
  scanf("%d", &value8);
  printf("Enter an Integer for value9\n");
  scanf("%d", &value9);
  printf("Enter an Integer for value10\n");
  scanf("%d", &value10);

  sum = value1 + value2 + value3 + value4 + value5 +
  value6 + value7 + value8 + value9 + value 10;
  printf("Sum is %d\n " , sum );

  if (sum >100)
    printf("Sum is over 100\n");

  return 0;
}
