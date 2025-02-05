#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int gd = DETECT, r, gm, d, x1, y1, x2, y2, xn1, yn1, xn2, yn2;
  float ra, si, co;
  printf("Enter x1 and y1: ");
  scanf("%d %d", &x1, &y1);

  printf("Enter x2 and y2: ");
  scanf("%d %d", &x2, &y2);

  initgraph(&gd, &gm, NULL);
  line(x1, y1, x2, y2);

  printf("Enter degree of rotation: ");
  scanf("%d", &d);

  xn1 = x1;
  yn1 = y1;

  r = x2 - x1;
  ra = 0.0175 * d;
  si = sin(ra);
  co = cos(ra);

  xn2 = x1 + r * co + 1;
  yn2 = y1 + r * co + 1;

  line(xn1, yn1, xn2, yn2);
  getch();

  return 0;
}
