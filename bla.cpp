/**
  * bla.cpp
  * Draw a line using the Bresenham's Line Algorithm.
  *
  * For instructions on how to run this program in Windows, see README.
  *
  * @Copyleft
  * All Wrongs Reserved.
  */

#include <graphics.h>

void bla(int,int,int,int);

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


	/* Draw the coordinate axes */
	line(xZero,0,xZero,maxY);
    line(0,yZero,maxX,yZero);

    /* Line 1. First Quadrant */
    startX = xZero+50; startY = 50;
	endX = maxX-50; endY = yZero-50;
    bla(startX,startY,endX,endY);

    /* Line 2. Second Quadrant */
    startX = xZero-50; startY = 50;
    endX = 50; endY = yZero-50;
    bla(startX,startY,endX,endY);

    /* Line 3. Third Quadrant */
    startX = 50; startY = yZero+50;
    endX = xZero-50; endY = maxY-50;
    bla(startX,startY,endX,endY);

    /* Line 4. Fourth Quadrant */
    startX = maxX-50; startY = yZero+50;
    endX = xZero+50; endY = maxY-50;
    bla(startX,startY,endX,endY);

    /* Wait till the user presses a key, then bye bye! */
	getch();
	closegraph();
	return 0;
}

void bla(int startX, int startY, int endX, int endY) {
	/* Declare local variables */
	int dx, dy, dParam;
	int x, y;

	/* Define local variables */
	dx = endX-startX; dy = endY-startY;
	dParam = (2*dy)-dx;
	x = startX; y = startY;

	/* Put the first pixel */
	putpixel(x,y,WHITE);

	/* dx Positive */
	if(dx>0) {

		/* dy Negative */
		if(dy<0) {
			while(x<=endX) {
				x++;
				if(dParam>=0) dParam += 2*dy;
				else {
					y--;
					dParam += (2*dy)-(2*dx);
				}
				putpixel(x,y,WHITE);
			}
		}

		/* dy Positive */
		else {
			while(x<=endX) {
				x++;
				if(dParam<=0) dParam += 2*dy;
				else {
					y++;
					dParam += (2*dy)-(2*dx);
				}
				putpixel(x,y,WHITE);
			}
		}
	}

	/* dx Positive */
	else {

		/* dy Negative */
		if(dy<0) {
			while(x>=endX) {
				x--;
				if(dParam>=0) dParam += 2*dy;
				else {
					y--;
					dParam += (2*dy)-(2*dx);
				}
				putpixel(x,y,WHITE);
			}
		}

		/* dy Positive */
		else {
			while(x>=endX) {
				x--;
				if(dParam<=0) dParam += 2*dy;
				else {
					y++;
					dParam += (2*dy)-(2*dx);
				}
				putpixel(x,y,WHITE);
			}
		}
	}
}
