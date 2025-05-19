**✅ Problem No:** 2  

**Problem Name:** Write a program to implement DDA (Digital Differential Analyzer) line drawing algorithm.

**Source Code:**  

```cpp
#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

void drawPoint(int x, int y){
    glPointSize(2.0);
    glBegin(GL_POINTS);
        glColor3f(1.0,1.0,1.0);
        glVertex2f(x,y);
    glEnd();
}

void drawLines(int x1, int y1, int x2, int y2){
    double m = (double) (y2-y1)/(x2-x1);

    double x = x1;
    double y = y1;

    for(int i = min(x1, x2); i <= max(x1,x2); i++){
        drawPoint(x,y);
        printf("%lf, %lf\n", x,y);
        if(m == 1){
            x = x + 1;
            y = y + 1;
        }else if(m > 1){
            x = x + (double) 1.0/m;
            y = y + 1;
        } else if (m < 1){
            x = x + 1;
            y = y + m;
        }
    }
}

static void display(void){
    glPushMatrix();
        drawLines(0, 0, 8, 4);
    glPopMatrix();

    glutSwapBuffers();
}

int main(){
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("DDA");
    glClearColor(0,0,0,0);
    glOrtho(-200, 200, -200, 200, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
```

**✅ Problem No:** 11  

**Problem Name:** Write a program to implement Cohen-Sutherland line clipping algorithm.

**Source Code:**  

```cpp
#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int x_min = 0;
int y_min = 0;
int x_max = 50;
int y_max = 50;

void drawPoint(int x, int y){
    glPointSize(2.0);
    glBegin(GL_POINTS);
        glColor3f(1, 1, 0);
        glVertex2f(x, y);
    glEnd();
}

bool isValidVertex(int x, int y){
    if(x >= x_min && x <= x_max && y >= y_min && y <= y_max){
        return true;
    }
    return false;
}

void drawLine(int x1, int y1, int x2, int y2){
    double m = (double) (y2 - y1) / (double) (x2 - x1);

    double x = x1;
    double y = y1;

    for (int i = min(x1, x2); i <= max(x1, x2); i++){

        if(isValidVertex(x, y)){
            drawPoint(x,y);
        }

        printf("%d %d\n", x,y);

        if(m==1){
            x = x+1;
            y = y+1;
        }
        else if(m > 1){
            x = x + (double) 1.0/m;
            y = y+1;
        }
        else if (m < 1){
            x = x+1;
            y= y+m;
        }
    }
}

static void display(void){
    glPushMatrix();
        glBegin(GL_QUADS);
            glColor3f(1, 0, 0);
            glVertex2f(x_min, y_min);
            glVertex2f(x_max, y_min);
            glVertex2f(x_max, y_max);
            glVertex2f(x_min, y_max);
        glEnd();
    glPopMatrix();

    glPushMatrix();
        drawLine(30, 20, 100, 140);
    glPopMatrix();

    glutSwapBuffers();
}

int main(){
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Midpoint Circle");
    glClearColor(0,0,0,0);
    glOrtho(-200, 200, -200, 200, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
```
