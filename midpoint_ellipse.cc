#include <graphics.h>
#include <stdio.h>

int main() {
  int gd = DETECT, gm;
  float x, y, xc, yc, rx, ry, pk, pk1;
  printf("Mid point ellipse drawing algorithm\n");
  printf("Enter center for ellipse\nx: ");
  scanf("%f", &xc);
  printf("y: ");
  scanf("%f", &yc);
  printf("Enter x-radius and y-radius\n x-radius: ");
  scanf("%f", &rx);
  printf("y-radius: ");
  scanf("%f", &ry);

  initgraph(&gd, &gm, NULL);
  x = 0;
  y = ry;

  pk = (ry * ry) - (rx * rx * ry) + ((rx * rx) / 4);
  while ((2 * x * ry * ry) < (2 * y * rx * rx)) {
    if (pk <= 0) {
      x = x + 1;
      pk1 = pk + (2 * ry * ry * x) + (ry * ry);
    } else {
      x = x + 1;
      y = y - 1;
      pk1 = pk + (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
    }
    pk = pk1;
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
  }

  pk = ((x + 0.5) * (x + 0.5) * ry * ry) + ((y - 1) * (y - 1) * rx * rx) -
       (rx * rx * ry * ry);
  while (y > 0) {
    if (pk > 0) {
      y = y - 1;
      pk1 = pk - (2 * rx * rx * y) + (rx * rx);
    } else {
      x = x + 1;
      y = y - 1;
      pk1 = pk + (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
    }
    pk = pk1;
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
  }
  getch();
  return 0;
}
