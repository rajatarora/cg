/**
  * bca.cpp
  * Draw a circle using the Basic Circle Algorithm.
  *
  * For instructions on how to run this program in Windows, see README.
  *
  * @Copyleft
  * All Wrongs Reserved.
  */

#include <graphics.h>

void bca(int,int,int);
void putcircle(int,int,int,int);

int main() {
	/* Declare variables */
	int maxX, maxY;
	int xZero, yZero;
	int startX, startY, radius;

	/* Get the graphics working */
	initwindow(500,500);

	/* Initialize variables */
	maxX = getmaxx(); xZero = maxX/2;
	maxY = getmaxy(); yZero = maxY/2;


	/* Draw the coordinate axes */
	line(xZero,0,xZero,maxY);
    line(0,yZero,maxX,yZero);

    /* Draw the circle */
    startX = xZero+(xZero/2);
    startY = 125;
    radius = 75;
    bca(startX,startY,radius);

	/* Wait till the user presses a key, then bye bye! */
	getch();
	closegraph();
	return 0;
}

void bca(int startX, int startY, int radius) {
	/* Declare local variables */
	int dParam;
	int x, y;

	/* Define local variables */
	dParam = 3-(2*radius);
	x = 0; y = radius;

	/* Plot the first eight points */
	putcircle(x,y,startX,startY);

	/* Basic Circle Algorithm */
	while(x<=y) {
		if(dParam<=0) {
			x++;
			dParam = dParam+(4*x)+6;
		}
		else {
			dParam = dParam+(4*x)-(4*y)+10;
			x++;
			y--;
		}
		putcircle(x,y,startX,startY);
	}
}

void putcircle(int x, int y, int startX, int startY) {
	putpixel(startX+x,startY+y,WHITE);
	putpixel(startX-x,startY+y,WHITE);
	putpixel(startX+x,startY-y,WHITE);
	putpixel(startX-x,startY-y,WHITE);
	putpixel(startX+y,startY+x,WHITE);
	putpixel(startX-y,startY+x,WHITE);
	putpixel(startX+y,startY-x,WHITE);
	putpixel(startX-y,startY-x,WHITE);
}
