#include <graphics.h>
#include <stdio.h>

void fill_right(int x, int y);
void fill_left(int x, int y);

int main() {
  int gd = DETECT, gm, x, y, n, i;
  initgraph(&gd, &gm, NULL);
  printf("*** Boundary Fill algorithm ***");
  /*- draw object -*/
  line(50, 50, 200, 50);
  line(200, 50, 200, 300);
  line(200, 300, 50, 300);
  line(50, 300, 50, 50);
  /*- set seed point -*/
  x = 100;
  y = 100;
  fill_right(x, y);
  fill_left(x - 1, y);
  getch();
  closegraph();
  return 0;
}

void fill_right(int x, int y) {
  if ((getpixel(x, y) != WHITE) && (getpixel(x, y) != RED)) {
    putpixel(x, y, RED);
    fill_right(++x, y);
    x = x - 1;
    fill_right(x, y - 1);
    fill_right(x, y + 1);
  }
}

void fill_left(int x, int y) {
  if ((getpixel(x, y) != WHITE) && (getpixel(x, y) != RED)) {
    putpixel(x, y, RED);
    fill_left(--x, y);
    x = x + 1;
    fill_left(x, y - 1);
    fill_left(x, y + 1);
  }
}
