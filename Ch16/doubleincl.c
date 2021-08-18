// doubincl.c -- include header twice
#include "names.h"
#include "names.h" // accidental second inclusion
#include <stdio.h>

int main() {
  names winner = {"Less", "Ismoor"};
  printf("The winner is %s %s.\n", winner.first, winner.last);
  return 0;
}
