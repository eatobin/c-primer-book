//* two_func.c -- a program using three functions in three files */
#include <stdio.h>

#include "butler.h"
#include "dvds.h"

int main(void) {
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes. Bring me some tea and %d writeable DVDs.\n", sum(9, 10));

  return 0;
}
