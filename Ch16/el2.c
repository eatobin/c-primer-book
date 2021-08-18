
//  el2.c

#include "eatline.h"
#include <stdio.h>

void dmb(void) {
  double m, b;

  scanf("%lf", &m);
  eatline();
  scanf("%lf", &b);
  printf("%f %f\n", m, b);
  return;
}
