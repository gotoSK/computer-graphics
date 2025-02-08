#include <graphics.h>
#include <stdio.h>

// Function to draw moving car
void draw_moving_car(void) {
  int i=0, gd = DETECT, gm;

  // Passed three arguments to initgraph
  // function to initialize graphics mode
  initgraph(&gd, &gm, NULL);

  while(1){
    setcolor(RED);

    // alpha
    circle(100, 75, 50); // head
    line(100, 125, 100+i, 250); // body
    line(100, 125, 40, 190); // left hand upper half
    line(40, 190, 100, 200); // left hand lower half
    line(100, 125, 175, 200); // right hand
    for(int j=0; j<=3; j++){
      line(100+i, 250+j, 140+i, 250+j); // d*ck
    }
    line(140+i, 245, 150+i, 252); // d*ck head
    line(150+i, 252, 140+i, 255); // d*ck head
    line(140+i, 245, 140+i, 255); // d*ck head
    for(int j=7; j>=0; j--){
      circle(95+i, 260, j); // left ball
      circle(105+i, 260, j); // right ball
    }
    line(100+i, 250, 70, 350); // left leg
    line(100+i, 250, 130, 350); // right leg

    // women
    line(150+i, 250, 140, 350); // left leg
    line(150+i, 250, 170, 350); // right leg
    line(150+i, 250, 250, 300); // body
    // line(200+i, 250, 210, 280); // right hand
    circle(270, 300, 30); // head
    for(int j=0; j<=20; j++){
      line(175, 200, 270-j, 270+j); // hair
    }

    delay(50);
    cleardevice();
    i=i+10;
    if(i==50)  i=0;
  }

  getch();

  closegraph();
}

// Driver code
int main(){
  draw_moving_car();
  return 0;
}
