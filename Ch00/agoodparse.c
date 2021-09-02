#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

enum { INPUT_SIZE = 30 };

int main() {
  char *ptr;
  long  ret;
  char  str[INPUT_SIZE];

  printf("Enter a number:\n");
  fgets(str, INPUT_SIZE, stdin);
  ret = strtol(str, &ptr, 10);

  if (ret == LONG_MAX || ret == LONG_MIN) {
    perror("!! Problem is -> ");
  } else if (ret) {
    printf("The number is %ld\n", ret);
  } else {
    printf("No number found input is -> %s\n", ptr);
  }

  return (0);
}
