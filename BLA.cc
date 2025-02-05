#include <graphics.h>
#include <stdio.h>

void drawline(int x0, int y0, int x1, int y1) {
  int dx, dy, p, x, y;
  dx = x1 - x0;
  dy = y1 - y0;
  p = 2 * dy - dx;
  x = x0;
  y = y0;
  while (x < x1) {
    if (p >= 0) {
      putpixel(x, y, RED);
      y++;
      p = p + 2 * dy - dx;
    } else {
      putpixel(x, y, RED);
      p = p + 2 * dy;
    }
    x++;
  }
}

int main(int argc, char const *argv[]) {
  int gd = DETECT, gm, x0, y0, x1, y1;
  printf("Enter start and end coordinates: ");
  scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
  initgraph(&gd, &gm, NULL);
  drawline(x0, y0, x1, y1);
  getch();
  closegraph();
  return 0;
}
