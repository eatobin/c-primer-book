//* two_func.c -- a program using two functions in two files */
#include <stdio.h>
#include "butler.h"

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}
