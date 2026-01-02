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
  snprintf(hostname, sizeof(hostname), "\1\e[38;5;%dm\2%s\1\e[0m\2", hue, result);

  if (err == 0) {
    color = "\1\e[38;5;70m\e[1m\2"; // green
    printf("%s]|[%s%s", color, "\1\e[0m\2", hostname);
  } else {
    color = "\1\e[48;5;196m\e[38;5;255m\e[1m\2"; // red
    printf("%s%d%s%s", color, err, "\1\e[0m\2", hostname);
  }
  return 0;
}
