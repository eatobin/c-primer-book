// arraymin.c -- find the smallest integer in an array of x

#include <stdio.h>

int main(void) {
  int    candidates[] = {22, 13, 666, 42, 9000, 20};
  int    currentMin   = candidates[0];
  size_t n            = sizeof(candidates) / sizeof(candidates[0]);

  for (int i = 0; i < n; ++i) {
    if (candidates[i] < currentMin) currentMin = candidates[i];
  }

  printf("length of candidates: %zu\n", n);
  printf("The min is: %d", currentMin);

  return 0;
}
