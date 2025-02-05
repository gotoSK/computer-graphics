#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int gd = DETECT, gm;
  float x1, y1, x2, y2, sx, sy, x3, y3, x4, y4;

  printf("Enter starting coordinates: ");
  scanf("%f %f", &x1, &y1);

  printf("Enter ending coordinates: ");
  scanf("%f %f", &x2, &y2);

  printf("Enter scaling factors: ");
  scanf("%f %f", &sx, &sy);

  initgraph(&gd, &gm, NULL);

  setcolor(WHITE);
  line(x1, y1, x2, y2);
  outtextxy(x2 + 2, y2 + 2, "Oringal line");
  x3 = x1 * sx;
  y3 = y1 * sy;
  x4 = x2 * sx;
  y4 = y4 * sy;
  setcolor(WHITE);
  line(x3, y3, x4, y4);
  outtextxy(x3 + 2, y3 + 2, "line after scaling");
  getch();
  closegraph();

  return 0;
}
