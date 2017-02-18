#pragma once

/*
Menue Chooser
-------------

Header for writing, moving the Choice-Cursor and picking the choosen menue entry.
Call by

int menuechooser(int start-x-point,int start-y-point,last-y-point);
returns int choosen_row_of_menue;

*/

void positionArrow(x, y) {
	lastArrowPosition[0] = x;
	lastArrowPosition[1] = y;
	gotoxy(x, y);
	printf(">");
	gotoxy(1, 10);
}

void deleteArrow() {
	gotoxy(lastArrowPosition[0], lastArrowPosition[1]);
	printf(" ");

}


int waitforcursor() {
	int key = ' ', arrow;
	while ((key = getKey()) != 584 && (key != 592)) {}
	if (key == 584) {
		// ("Cursor up")
		arrow = 1;
	}
	else {
		// ("Cursor down")
		arrow = 2;
	}
	return arrow;
}

int movecursor() {
	int fake = 1, direction;
	while (fake == 1) {
		direction = waitforcursor();

		if (direction == 1 && lastArrowPosition[1] - 1 >= 5) {
			deleteArrow();
			positionArrow(lastArrowPosition[0], lastArrowPosition[1] - 1);
		}
		else if (lastArrowPosition[1] + 1 <= 7) {
			deleteArrow();
			positionArrow(lastArrowPosition[0], lastArrowPosition[1] + 1);
		}
	}
	return 0;
}


int menuechooser(int startx, int starty, int lasty) {
	int choosenrow = 0;
	
	return choosenrow;
}