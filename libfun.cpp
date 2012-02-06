/**
  * libfun.cpp
  * Draw a line, a rectangle, a circle and an ellipse using the library functions provided
  * by graphics.h
  *
  * For instructions on how to run this program in Windows, see README.
  *
  * @Copyleft
  * All Wrongs Reserved.
  */

#include <graphics.h>

int main() {
    /* Declare variables */
    int maxX, maxY;
    int xZero, yZero;

    /* Get the graphics working */
    initwindow(500,500);

    /* Draw the coordinate axes */
    maxX = getmaxx(); xZero = maxX/2;
    maxY = getmaxy(); yZero = maxY/2;
    line(xZero,0,xZero,maxY);
    line(0,yZero,maxX,yZero);

    /* Line, rectangle, circle and ellipse */
    line(xZero+50,yZero-50,maxX-50,50);
    line(xZero+50,50,maxX-50,yZero-50);
    rectangle(xZero+50,yZero-200,xZero+200,yZero-50);
    circle(xZero+125,yZero-125,75);
    ellipse(xZero+125,yZero-125,0,360,25,75);
    ellipse(xZero+125,yZero-125,0,360,75,25);

    /* Wait till the user presses a key, then bye bye! */
    getch();
    closegraph();
    return 0;
}

/* Code is Poetry */
