// arraymindynamic.c -- find the smallest integer in an array of dynamic 5

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *candidates;
  candidates = malloc(15 * sizeof(*candidates));
  //  int    candidates[] = {22, 13, 666, 42, 9000, 20};
  //    int    currentMin   = candidates[0];
  size_t n = sizeof(candidates);
  //
  //  for (int i = 0; i < n; ++i) {
  //    if (candidates[i] < currentMin) currentMin = candidates[i];
  //  }
  //
  printf("length of candidates: %zu\n", n);
  //  printf("The min is: %d", currentMin);
  //
  free(candidates);
  //  return 0;
}
