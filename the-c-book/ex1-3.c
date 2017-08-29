// Exercise 1.3 Create a program that takes a string with a number, and returns the demical value of that string
// example if you pass the string "146", it will return 146 as a number
// inputs: string of characters, string will only contain valid digits and newlinecharacters
// outputs: prime pairs up to n
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMS "0123456789"

int main() {
	int i;
	int feed = 1;
	char* str = "";
	
	printf("This program will ask for digits, and will output their decimal values.\n");
	printf("Example: \"1, 4, 6\" will return 146.\n");

	while (feed == 1) {
		printf("Please enter a digit (Press enter when done):\n");
		char my_char = getChar();

		if (my_char == '\n' || strchr(NUMS, my_char) == NULL) { 
			break;
		} else {
			int len = strlen(str);
			char *temp = malloc(len + 2);
			temp = strcopy(*temp, str);
			temp[len] = getChar();
			temp[len + 1] = '\0';
		}

	}

	if (strlen(str) == 0) {
		printf("It seems like you did not input any digits.\n Would you like to try again?");
		printf("Press \'y\' to continue, or \'n\' to exit");
		char resp = getChar();

		if (resp == 'y') {
			main();
		} else {
			exit(0);
		}
	} else {

	}



}
