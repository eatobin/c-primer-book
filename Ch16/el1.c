//  el1.c
#include "eatline.h"
#include <stdio.h>
void dmb(void);

int main(void) {
  int n, m;

  scanf("%d", &n);
  eatline();
  scanf("%d", &m);
  printf("%d %d\n", n, m);
  eatline();
  dmb();

  return 0;
}
