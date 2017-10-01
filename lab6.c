#include <stdio.h>
int main () {
  char StudentName[100];
  float ExamValue, Sum, Avg;
  int students, exams, num;

  printf("How many students would you like to caluculate averages for?\n");
  scanf("%d", &num);

  for (students = 0; students < num ; students++) {
     Sum = 0.0;
     printf("Enter Student Name \n");
     scanf("%s", StudentName);

    for (exams=0; exams < 3; exams++)  {
        printf ("EnterD exam grade: \n");
        scanf("%f", &ExamValue);
        Sum += ExamValue;
    }
    Avg = Sum / 3.0;
    printf( "Average for %s is %f\n",StudentName, Avg);
  }
  return 0;
}
