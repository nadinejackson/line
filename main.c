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

  draw_line(100, 100, 150, 80, s, c);//o8
  draw_line(100, 100, 100, 350, s, c);//vertical (up)
  draw_line(150, 330, 100, 350, s, c);//o4
  draw_line(150, 330, 150, 80, s, c);//vertical (down)
  draw_line(100, 350, 185, 455, s, c);//o2
  draw_line(110, 347, 200, 450, s, c);//o2
  draw_line(120, 344, 220, 440, s, c);//o1
  draw_line(135, 338, 235, 430, s, c);//o1
  draw_line(150, 330, 248, 418, s, c);//o1
  draw_line(150, 80, 248, 168, s, c);//o1
  draw_line(248, 418, 248, 168, s, c);//vertical (down)
  draw_line(150, 80, 150, 330, s, c);//vertical (up)

  
  draw_line(185, 435, 185, 455, s, c);//vertical
  draw_line(200, 450, 200, 420, s, c);//vertical
  draw_line(220, 440, 220, 415, s, c);//vertical
  draw_line(235, 430, 235, 405, s, c);//vertical

  display(s);
  save_extension(s, "lines.png");
}
