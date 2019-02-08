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
  c.blue = 0;

  clear_screen(s);

  //o1
  draw_line(400, 400, 500, 450, s, c);
  //o2
  draw_line(400, 400, 450, 500, s, c);
  //o3
  draw_line(400, 400, 350, 500, s, c);
  //o4
  draw_line(400, 400, 300, 450, s, c);
  //o5
  draw_line(400, 400, 300, 350, s, c);
  //o6
  draw_line(400, 400, 350, 300, s, c);
  //o7
  draw_line(400, 400, 450, 300, s, c);
  //o8
  draw_line(400, 400, 500, 350, s, c);

  //horizontal and vertical
  draw_line(400, 400, 400, 500, s, c);
  draw_line(400, 400, 500, 400, s, c);
  draw_line(400, 400, 300, 400, s, c);
  draw_line(400, 400, 400, 300, s, c);
 
  //diagonal 45 degrees
  draw_line(400, 400, 500, 500, s, c);
  draw_line(400, 400, 300, 300, s, c);
  draw_line(400, 400, 300, 500, s, c);
  draw_line(400, 400, 500, 300, s, c);
  
  display(s);
  save_extension(s, "lines.png");
}
