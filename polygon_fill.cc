#include <graphics.h>

int main() {
  int gd = DETECT, gm;
  initgraph(&gd, &gm, NULL);
  int p = 1, x;
  int a[12] = {100, 100, 150, 150, 200, 100, 200, 200, 100, 200, 100, 100};
  drawpoly(6, a);
  for (int i = 100; i < 200; i++) {
    p = 1;
    for (int j = 100; j <= 200; j++) {
      x = getpixel(j, i);
      for (int d = 0; d < 11; d++) {
        if (j == a[d] && i == a[d + 1])
          break;
        else {
          if (x > 0 && d == 10) p++;
          if (p % 2 == 0) putpixel(j, i, 4);
        }
      }
    }
  }
  getch();
  closegraph();
  return 0;
}
