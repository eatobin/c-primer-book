#include <stdio.h>
#include <string.h>

int main(void) {
  char name[40];
  printf("What's your name? ");
  if (fgets(name, 40, stdin)) {
    printf("Newline occurs at position: %lu\n", strcspn(name, "\n"));
    name[strcspn(name, "\n")] = 0;
    printf("Hello %s!\n", name);
  }
}
