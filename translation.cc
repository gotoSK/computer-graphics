#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int gd = DETECT, gm, x1, y1, x2, y2;
  initgraph(&gd, &gm, NULL);
  printf("Enter start coordinates: ");
  scanf("%d %d", &x1, &y1);

  printf("Enter end coordinates: ");
  scanf("%d %d", &x2, &y2);
  line(x1, y1, x2, y2);

  int tx=20, ty=30;

  line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
  getch();
  closegraph();

  return 0;
}
