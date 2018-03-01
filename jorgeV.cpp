//Jorge Vasquez
//
#include "fonts.h"

void showName(const char * name, int x, int y)
{
    Rect r;
    r.bot = 100;
    r.left = y;
    r.center = x;
    ggprint8b(&r, 16, 0x00ffff00, "jorge Vasquez");
}



