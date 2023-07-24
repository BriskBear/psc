#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  char * err = argv[1];   // get the error code from the command line
  srand(time(NULL));      // seed pseudo-random with time
  int hue = rand() % 255; // random color

  printf("\033[38;5;%dm%s\033[0m", hue, err);
  return 0;
}
