**✅ Problem No:** 1  

**Problem Name:** Write a program to implement Bresenham's line drawing algorithm.

**Source Code:**  

```cpp
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void drawPoint(int x, int y) {
    glPointSize(2.0);
    glBegin(GL_POINTS);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(x, y);
    glEnd();
}

void drawLines(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int p = 2 * dy - dx;

    while (x1 < x2) {
        x1++;
        if (p >= 0) {
            y1++;
            p = p + 2 * dy - 2 * dx;
        } else {
            p = p + 2 * dy;
        }
        drawPoint(x1, y1);
        printf("(%d, %d)\n", x1, y1);
    }
}

static void display(void) {
    glPushMatrix();
    drawLines(20, 10, 30, 18);
    glPopMatrix();
    glutSwapBuffers();
}

int main(){
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Bresenham Line");
    glClearColor(0,0,0,0);
    glOrtho(-200, 200, -200, 200, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
```

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

**✅ Problem No:** 4  

**Problem Name:** Write a program to implement Midpoint circle drawing algorithm.

**Source Code:**  

```cpp
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>

void drawPoint(int x, int y) {
    glPointSize(2.0);
    glBegin(GL_POINTS);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(x, y);
    glEnd();
}

void drawCirclePoint(int xc, int yc, int x, int y) {
    drawPoint(xc + x, yc + y);
    drawPoint(xc - x, yc + y);
    drawPoint(xc + x, yc - y);
    drawPoint(xc - x, yc - y);
    drawPoint(xc + y, yc + x);
    drawPoint(xc - y, yc + x);
    drawPoint(xc + y, yc - x);
    drawPoint(xc - y, yc - x);
}

void drawCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int p = 1 - r;
    drawCirclePoint(xc, yc, x, y);

    while (x < y) {
        x++;
        if (p <= 0) {
            p = p + (2 * x) + 1;
        } else {
            y--;
            p = p + (2 * x) + 1 - (2 * y);
        }
        drawCirclePoint(xc, yc, x, y);
    }
}

static void display(void) {
    glPushMatrix();
    drawCircle(2, 2, 10);
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
    glutCreateWindow("Cohen-Sutherland line clipping");
    glClearColor(0,0,0,0);
    glOrtho(-200, 200, -200, 200, -1, 1);

    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
```
