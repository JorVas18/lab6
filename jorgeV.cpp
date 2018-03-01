//Jorge Vasquez
//
#include "GL/glx.h"
#include "fonts.h"

void showName(const char * name, int x, int y)
{
    Rect r;
    r.bot = 100;
    r.left = y;
    r.center = x;
    ggprint8b(&r, 16, 0x00ffff00, "jorge Vasquez");
}
void drawBox(int x, int y)
{
   static float angle = 0.0;
   glColor3ub(255,0,0);
   glPushMatrix();
   glTranslatef(x, y, 0.0);
   glRotatef(angle, 0.0f, 0.0f, 1.0f);
   glTranslatef(-50.0, -50.0, 0.0); 
   angle = angle + 2.5;
   glBegin(GL_QUADS);
   glVertex2i(  0,     0);
   glVertex2i(  0,   100);
   glVertex2i(  100, 100);
   glVertex2i(  100,   0);
   glEnd();

   Rect r;
   r.bot = 50;
   r.left = 50;
   r.center = 1;
   ggprint8b(&r, 16 , 0x00ffffff , "jorge V.");

   glPopMatrix();
}



