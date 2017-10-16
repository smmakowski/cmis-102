#define NUMMONTHS 12
#define NUMYEARS 5
#include <stdio.h>

// function prototypes
void inputdata();
void printdata();
void sumRainfall();

// Global variables
// These are available to all functions
float Raindata[NUMYEARS][NUMMONTHS];
float Winddata[NUMYEARS][NUMMONTHS];
char years[NUMYEARS][5] = {"2011","2012","2013","2014","2015"};
char months[NUMMONTHS][12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main () {
  char enterData = 'y';
  printf("Do you want to input Precipatation data? (y for yes)\n");
  scanf("%c",&enterData);
  if (enterData == 'y') {
    // Call Function to Input data
    inputdata();

     // Call Function to display data
     printdata();
     sumRainfall();
   }
   else {
     printf("No data was input at this time\n");
   }
   printf("Please try the Precipitation program again. \n");
   return 0;
}
// function to inputdata
void inputdata() {
  /* variable definition: */
  float Rain=1.0;
  float Wind=1.0;
   // Input Data
   for (int year=0;year < NUMYEARS; year++) {
      for (int month=0; month< NUMMONTHS; month++) {
          printf("Enter rain for %d, %d:\n", year+1, month+1);
          scanf("%f",&Rain);
          Raindata[year][month]=Rain;
          printf("Enter wind for %d, %d:\n", year+1, month+1);
          scanf("%f",&Wind);
          Winddata[year][month]=Wind;
      }
   }
}
// Function to printdata
void printdata() {
// Print data
   printf ("year\t month\t rain\t wind\n");
   for (int year=0;year < NUMYEARS; year++) {
      for (int month=0; month< NUMMONTHS; month++) {
          printf("%s\t %s\t %5.2f\t %5.2f\n", years[year],months[month],Raindata[year][month], Winddata[year][month]);
      }
   }
}

void sumRainfall() {
     for (int year=0;year < NUMYEARS; year++) {
        float total = 0.0;
        for (int month=0; month< NUMMONTHS; month++) {
            total += Raindata[year][month];
        }
        printf("Total rain for %s is  %.2f.\n", years[year], total);
     }
}
