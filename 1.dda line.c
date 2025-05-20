#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

void drawPoint(int x,int y)
{
    glPointSize(2.0);
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(x,y);
    glEnd();

}
void drawlines(int x1, int y1, int x2, int y2)
{
    double m=(double)(y2-y1)/(double)(x2-x1);

    double x= x1;
    double y= y1;
    for(int i= min(x1,x2);i<= max(x1,x2);i++){

        drawPoint(x, y);
        printf("%.1f,%1f\n",x,y);

        if (m==1){
            x=x+1;
            y=y+1;
        }
    else if(m<1){
        x=x+(double)1.0/m;
        y= y+1;

    }
    else if(m<1){
        x= x+1;
        y= y+m;
    }
  }

}

static void display(void)
{
    glPlushMatrix();
    drawLines(0,0,8,4);
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














