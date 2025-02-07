#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

void drawpoints(int x, int y, int xc, int yc) {
  putpixel(xc + x, yc + y, 7);
  putpixel(xc + y, yc + x, 7);
  putpixel(xc - x, yc + y, 7);
  putpixel(xc + x, yc - y, 7);
  putpixel(xc - x, yc - y, 7);
  putpixel(xc + y, yc - x, 7);
  putpixel(xc - y, yc - x, 7);
  putpixel(xc - y, yc + x, 7);
}
void drawcircle(int xc, int yc, int r) {
  int p, x, y;
  x = 0;
  y = r;
  p = 1 - r;

  while (x < y) {
    drawpoints(x, y, xc, yc);

    if (p < 0) {
      p = p + (2 * x) + 1;
    } else {
      y--;
      p = p + 2 * (x - y) + 1;
    }
    x = x + 1;
  }
}

int main() {
  // Request auto detection
  int gdriver = DETECT, gmode, errorcode, xc, yc, r;

  printf("Enter the center co-cordinates: ");
  scanf("%d %d", &xc, &yc);
  printf("Enter the radius:");
  scanf("%d", &r);

  initgraph(&gdriver, &gmode, NULL);

  drawcircle(xc, yc, r);

  getch();
  closegraph();
}