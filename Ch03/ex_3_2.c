// ex_3_2.c
#include <stdio.h>
int main(void) {
  int code;

  printf("Please enter an ASCII code value: ");
  scanf("%d", &code);
  printf("The character for %d is %c.\n", code, code);

  return 0;
}
