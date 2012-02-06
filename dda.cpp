/**
  * dda.cpp
  * Draw a line using the Digital Differential Analyser algorithm.
  *
  * For instructions on how to run this program in Windows, see README.
  *
  * @Copyleft
  * All Wrongs Reserved.
  */

#include <graphics.h>

void dda(int,int,int,int);

int main() {
	/* Declare variables */
	int maxX, maxY;
	int xZero, yZero;
	int startX, startY, endX, endY;

	/* Get the graphics working */
	initwindow(500,500);

	/* Initialize variables */
	maxX = getmaxx(); xZero = maxX/2;
	maxY = getmaxy(); yZero = maxY/2;
	startX = xZero+50; startY = yZero-50;
	endX = maxX-50; endY = 50;

	/* Draw the coordinate axes */
	line(xZero,0,xZero,maxY);
    line(0,yZero,maxX,yZero);

    /* Draw the line */
    dda(startX,startY,endX,endY);

	/* Wait till the user presses a key, then bye bye! */
	getch();
	closegraph();
	return 0;
}

void dda(int startX, int startY, int endX, int endY) {
	/* Declare local variables */
	int dx, dy, steps;
	float xIncr, yIncr;
	float x, y;

	/* Initialize local variables */
	dx = endX - startX;
	dy = endY - startY;
	steps = (dx>=dy)?dx:dy;
	x = startX; y = startY;
	xIncr = float(dx) / steps;
	yIncr = float(dy) / steps;

	/* Put the first pixel */
	putpixel(int(x),int(y),WHITE);

	/* Digital Differential Analyzer */
	for(int i=0; i<=steps; i++) {
		x += xIncr;
		y += yIncr;
		putpixel(int(x),int(y),WHITE);
	}
}
