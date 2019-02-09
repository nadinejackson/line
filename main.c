#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = MAX_COLOR;

  clear_screen(s);

  //key: o<num> means the line is drawn in that octant from the starting point
  //1 means the slope is 1
  //-1 means the slope is -1
  //the (NE/SE/SW/NW) refer to the directions on a compass
  draw_line(100, 100, 150, 80, s, c);//o8
  draw_line(100, 100, 100, 350, s, c);//vertical (up)
  draw_line(150, 330, 100, 350, s, c);//o4
  draw_line(150, 330, 150, 80, s, c);//vertical (down)
  draw_line(100, 350, 185, 455, s, c);//o2
  draw_line(200, 450, 110, 347, s, c);//o6
  draw_line(121, 341, 220, 440, s, c);//1 (NE)
  draw_line(135, 338, 235, 430, s, c);//o1
  draw_line(248, 418, 150, 330, s, c);//o5
  draw_line(150, 80, 248, 168, s, c);//o1
  draw_line(248, 418, 248, 168, s, c);//vertical (down)
  draw_line(150, 80, 150, 330, s, c);//vertical (up)

    
  draw_line(185, 435, 185, 455, s, c);//vertical
  draw_line(200, 450, 200, 420, s, c);//vertical
  draw_line(220, 440, 220, 415, s, c);//vertical
  draw_line(235, 430, 235, 405, s, c);//vertical
  
  draw_line(248, 250, 500, 250, s, c);//horizontal (right)
  draw_line(500, 260, 248, 260, s, c);//horizontal (left)
  draw_line(250, 500, 500, 250, s, c);//-1 (SE)
  draw_line(0, 500, 200, 0, s, c);//o7
  draw_line(190, 0, 0, 490, s, c);//o3
  draw_line(100, 100, 0, 0, s, c);//1 (SW)
  draw_line(250, 250, 0, 500, s, c);//-1 (NW)
  display(s);
  save_extension(s, "lines.png");
}
