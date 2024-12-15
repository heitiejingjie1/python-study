#include "link.h"
#include <stdio.h>

typedef struct{
  int x;
  int y;
} point;

int main(void)
{
  point *p;

  (*p).x = 100;
  p->y = 200;

  printf("%i, %i", p->x, p->y);
  
  return 0;
}
