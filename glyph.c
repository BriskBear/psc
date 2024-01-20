#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char * sym = argv[1];   // get the glyph [sym]bol from the command line

  printf("\033[38;5;160m%s\033[0m", sym);
  return 0;
}
