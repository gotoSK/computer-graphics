
#include <graphics.h>
#include <stdio.h>

int main() {
  int gm, gd = DETECT, ax;
  int x1 = 100, y1 = 100, x2 = 100, y2 = 200, x3 = 200, y3 = 100;

  initgraph(&gd, &gm, NULL);

  line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
  line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

  printf("Before Reflection the object in 2nd Quadrant\n");
  setcolor(WHITE);

  line(x1, y1, x2, y2);
  line(x2, y2, x3, y3);
  line(x3, y3, x1, y1);

  getch();

  printf("After Reflection the object in 4th Quadrant");
  line(getmaxx() - x1, getmaxy() - y1, getmaxx() - x2, getmaxy() - y2);
  line(getmaxx() - x2, getmaxy() - y2, getmaxx() - x3, getmaxy() - y3);
  line(getmaxx() - x3, getmaxy() - y3, getmaxx() - x1, getmaxy() - y1);

  getch();

  // along x axis
  line(getmaxx() - x1, y1, getmaxx() - x2, y2);
  line(getmaxx() - x2, y2, getmaxx() - x3, y3);
  line(getmaxx() - x3, y3, getmaxx() - x1, y1);

  getch();

  line(x1, getmaxy() - y1, x2, getmaxy() - y2);
  line(x2, getmaxy() - y2, x3, getmaxy() - y3);
  line(x3, getmaxy() - y3, x1, getmaxy() - y1);

  getch();
  closegraph();

  return 0;
}
