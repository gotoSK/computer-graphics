#include <graphics.h>
#include <math.h>
#include <stdio.h>

int x1, x2, yone, y2, mx, my, depth;
void draw();
void rotate();

int main() {
  int gd = DETECT, gm, c;
  initgraph(&gd, &gm, NULL);
  printf("\n3D Transformation Rotating\n\n");
  printf("\nEnter 1st top value(x1,yone):");
  scanf("%d%d", &x1, &yone);
  printf("Enter right bottom value(x2,y2):");
  scanf("%d%d", &x2, &y2);
  depth = (x2 - x1) / 4;
  mx = (x1 + x2) / 2;
  my = (yone + y2) / 2;
  draw();
  getch();
  cleardevice();
  rotate();
  getch();
  return 0;
}
void draw() { bar3d(x1, yone, x2, y2, depth, 1); }

void rotate() {
  float t;
  int a1, b1, a2, b2, dep;
  printf("Enter the angle to rotate=");
  scanf("%f", &t);
  t = t * (3.14 / 180);
  a1 = mx + (x1 - mx) * cos(t) - (yone - my) * sin(t);
  a2 = mx + (x2 - mx) * cos(t) - (y2 - my) * sin(t);
  b1 = my + (x1 - mx) * sin(t) - (yone - my) * cos(t);
  b2 = my + (x2 - mx) * sin(t) - (y2 - my) * cos(t);
  if (a2 > a1)
    dep = (a2 - a1) / 4;
  else
    dep = (a1 - a2) / 4;
  bar3d(a1, b1, a2, b2, dep, 1);
  setcolor(5);
  // draw();
}
