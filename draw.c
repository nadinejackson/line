#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c)
{
  //octants 3, 4, 5, and 6
  if (x1 < x0)
    draw_line(x1, y1, x0, y0, s, c);
  //octants 1, 2, 7, and 8
  else
    {
      int x = x0;
      int y = y0;
      int a = y1 - y0;
      int b = x0 - x1;
      int d;
      if (a >= 0)
	{
	  //octant 1
	  if (a < b * -1)
	    {
	      d = 2 * a + b;
	      while(x <= x1)
		{
		  plot(s, c, x, y);
		  if (d > 0)
		    {
		      y++;
		      d += 2 * b;
		    }
		  x++;
		  d += 2 * a;
		}
	    }
	  //octant 2
	  else
	    {
	      d = a + 2 * b;
	      while(y <= y1)
		{
		  plot(s, c, x, y);
		  if (d < 0)
		    {
		      x++;
		      d += 2 * a;
		    }
		  y++;
		  d += 2 * b;
		}
	    }
	}
      else
	{
	  //a has a greater magnitude, octant 7
	  if(a < b)
	    {
	      d = -1 * a + 2 * b;
	      while(y > y1)
		{
		  plot(s, c, x, y);
		  if (d < 0)
		    {
		      x++;
		      d -= 2 * a;
		    }
		  y--;
		  d += 2 * b;
		}
	  }
	//octant 8
	else
	  {
	    d = -2 * a + b;
	      while(x <= x1)
		{
		  plot(s, c, x, y);
		  if (d > 0)
		    {
		      y--;
		      d += 2 * b;
		    }
		  x++;
		  d -= 2 * a;
		}
	  }
	}
    }
}
