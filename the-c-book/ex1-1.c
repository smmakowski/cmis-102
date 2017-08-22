// Exercise 1.1
// Inputs: none
// Output: "Hello" should be printed 10 times, once per line

#include <stdio.h>
#include <stdlib.h>

void show_message(void) {
  printf("Hello\n");
}

int main() {
  int count;

  count = 0;

  while (count < 10) {
    show_message();
    count = count + 1;
  }

  exit(0);
}
