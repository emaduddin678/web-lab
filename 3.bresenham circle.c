#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>

#include<stdio.h>

void drawPoint(int x,int y)
{
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
    glEnd();

}
void drawCirclePoint(int x, int y )
{
    drawPoint(+x,+y);
     drawPoint(-x,-y);
      drawPoint(+x,-y);
       drawPoint(-x,-y);
        drawPoint(+y,+x);
         drawPoint(-y,x);
          drawPoint(+y,-x);
           drawPoint(-y,-x);



}
void drawCircle(int r)
{
    int x=0;
    int y=r;
    int d=3-2*r;

    drawCirclePoint(x,y);

    while(y>x)
    {
        x++;

        if(d>0)
        {
            y--;
            d=d+4*(x-y)+10;

        }
        else
        {
            d=d+4*x+6;

        }
        drawCirclePoint(x,y);
        printf("%d, %d\n",x,y);
    }

}

static void display(void)
{
    glPushMatrix();
    drawCircle(10);

    glPopMatrix();

    glutSwapBuffers();

}

int main()
{
    glutInitDisplayMode(GLUT_RGB| GLUT_DOUBLE| GLUT_DEPTH);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(100,100);
    glutCreateWindow("DDA");
    glClearColor(0,0,0,0);
    glOrtho(-200,200,-200,200,-1,1);

    glutDisplayFunc(display);

    glutMainLoop();
    return EXIT_SUCCESS;
}


