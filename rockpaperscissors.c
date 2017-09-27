#include <stdio.h>
#define ROCK 'r'
#define PAPER 'p'
#define SCISSOR 's'

void confirm(char[] prompt) {
  char resp;
  printf("%s", message);
  scanf("%c", &resp);
  if (resp != 'y') {
    return;
  } else if (resp != 'n') {
    printf("Okay! Thank you for playing!\n");
    exit(0);
  } else {
    printf("Please input a correct response ");
    confirm(prompt);
  }
}

int main(void) {
  int comp_wins = 0;
  int player_wins = 0;

  // setup welcome screen
  printf("Welcome to Rock Paper Scissors. In this program you will play against \
  the computer and we will keep track of your score.\n");

  confirm("Shall we begin? Press \'y\' \to start, and 'n to exit'");

  exit(0);
}
