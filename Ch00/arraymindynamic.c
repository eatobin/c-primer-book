// arraymindynamic.c -- find the smallest integer in an array of dynamic 5

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *candidate;
  int  currentMin;

  candidate = malloc(5 * sizeof(*candidate));

  if (candidate == NULL) {
    fprintf(stderr, "malloc failed\n");
    return -1;
  }

  printf("Enter 5 integers:\n");
  scanf("%d %d %d %d %d", &candidate[0], &candidate[1], &candidate[2],
        &candidate[3], &candidate[4]);

  currentMin = candidate[0];

  for (int i = 0; i < 5; ++i) {
    if (candidate[i] < currentMin) currentMin = candidate[i];
  }

  printf("The min is: %d", currentMin);
  free(candidate);
  return 0;
}
