#include <stdio.h>
#include <stdbool.h>

int main() {
  int i = 0;
  bool sriously = true;

  printf("                             ____\n");
  printf("                            (    )\n");
  printf("                    _-----(_______)----_\n");
  printf("                 _-                       \\-_\n");
  printf("                /      \\\\\\\\\\\\    \\\\\\\\\\\\ __   \\\n");
  printf("              /  __  -- (     )(    )     ---_\\\n");
  printf("             | --      (    @)(  @   )         |\n");
  printf("             |        (____ /  \\_____)         |\n");
  printf("            _\\              ____               /_\n");
  printf("          /    \\__          (___)            _ /  \\\n");
  printf("        (      )   \\-__                 __ -(      )\n");
  printf("       (       )        \\--------------/   (_      )\n");
  printf("         (------)            *|               (----)\n");
  printf("          (                  *|                 )\n");
  printf("            \\ --_____________*|______________ /\n");

  for (i = 0; i < 2; i++) {
    int j;
    for (j = 0; j < 17; j++) {
      printf(" ");
    }
    for (j = 0; j < 25; j++) {
      printf("=");
    }
    printf("\n");
  }
  //printf("                 =========================\n");
  //printf("                 =========================\n");
  if (sriously) {
    printf("                \"I am sooo Sriously, you guys!!\"");
  }
  return 0;
}
