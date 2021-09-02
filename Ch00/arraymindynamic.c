// arraymindynamic.c -- find the smallest integer in an array of dynamic 5

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *candidates;
  int  currentMin;

  candidates = malloc(5 * sizeof(*candidates));

  if (candidates == NULL) {
    fprintf(stderr, "malloc failed\n");
    return -1;
  }

  printf("Enter 5 integers: ");
  scanf("%d %d %d %d %d", &candidates[0], &candidates[1], &candidates[2],
        &candidates[3], &candidates[4]);

  currentMin = candidates[0];

  for (int i = 0; i < 5; ++i) {
    if (candidates[i] < currentMin) currentMin = candidates[i];
  }

  printf("The min is: %d", currentMin);
  free(candidates);
  return 0;
}
