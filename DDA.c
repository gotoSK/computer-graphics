#include <graphics.h>
#include <math.h>
#include <stdio.h>


// DDA func
void DDA(int x0, int y0, int x1, int y1) {
  int dx = x1 - x0;
  int dy = y1 - y0;
  int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
  float xinc = (float)(dx / (float)steps);
  float yinc = (float)(dy / (float)steps);
  // put pixel for each step
  float x = x0;
  float y = y0;

  for (size_t i = 0; i <= steps; i++) {
    // printf("%d %d\n", (int)round(x), (int)round(y));
    putpixel((int)round(x), (int)round(y), WHITE);
    x += xinc;
    y += yinc;
    delay(100);
  }
}

int main(int argc, char const *argv[]) {
  int gd = DETECT, gm;
  int x0, y0, x1, y1;
  printf("Enter coordintes: ");
  scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
  initgraph(&gd, &gm, NULL);
  DDA(x0, y0, x1, y1);
  getch();
  closegraph();
  return 0;
}
