//* two_func.c -- a program using three functions in three files */
// gcc -o yuppers two_func_et.c butler.c dvds.c
#include <stdio.h>

#include "butler.h"
#include "dvds.h"

int main(void) {
  printf("I will summon the butler function.\n");
  butler();
  printf("Yes. Bring me some tea and %d writeable DVDs.\n", sum(9, 10));

  return 0;
}
