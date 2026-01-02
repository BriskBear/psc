#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  char * sym = argv[1];      // get the glyph [sym]bol from the command line
  srand(time(NULL));         // seed pseudo-random with time
  int hue    = rand() % 255; // random color

  printf("\1\e[38;5;%dm\2%s\e[0m", hue, sym);
  return 0;
}
