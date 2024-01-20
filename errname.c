#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  char *color;                        // A Place to store error color
  char hostname[1024];                // the final printable hostname
  char result[1024];                  // the output of the hostname query
  int err = atoi(argv[1]);            // get the error code from the command line
  srand(time(NULL));                  // seed pseudo-random with time
  int hue = rand() % 255;             // random color

  gethostname(result, sizeof(result));
  snprintf(hostname, sizeof(hostname), "\033[38;5;%dm%s\033[0m", hue, result);

  if (err == 0) {
    color = "\033[0;32m"; // green
    printf("%s]|[%s%s", color, "\033[0m", hostname);
  } else {
    color = "\033[38;5;196m"; // red
    printf("%s%d%s%s", color, err, "\033[0m", hostname);
  }
  return 0;
}
