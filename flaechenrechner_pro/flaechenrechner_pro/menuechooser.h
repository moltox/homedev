#pragma once


/*
Menue Chooser
-------------
Header for writing, moving the Choice-Cursor and picking the choosen menue entry.
Call by
int menuechooser(int start-x-point,int start-y-point,last-y-point);
returns int choosen_row_of_menue;
*/

void first_positionArrow(int arrowPosition_x, int arrowPosition_y) {
	gotoxy(arrowPosition_x,arrowPosition_y);
	printf(">");
	gotoxy(20, 20);
}




int menuechooser(int startx, int starty, int lasty) {
	int choosenrow = 0;
	int lastCursorPosition_x = startx,lastCursorPosition_y = startx,key = ' ';
	first_positionArrow(startx, starty);
	// Cursor bewegen und auf Return warten, dann aktuelle Reihe zurück geben
	
	while ((key = getKey()) != 13) {
		if (key == 592 && lastCursorPosition_y < lasty) {  			// key down?
			gotoxy(lastCursorPosition_x, lastCursorPosition_y);
			printf(" ");
			gotoxy(lastCursorPosition_x, lastCursorPosition_y + 1);
			lastCursorPosition_y++;
			printf(">");
		}
		if (key == 584 && lastCursorPosition_y > starty ) {  			// key up?
			gotoxy(lastCursorPosition_x, lastCursorPosition_y);
			printf(" ");
			gotoxy(lastCursorPosition_x, lastCursorPosition_y - 1);
			lastCursorPosition_y--;
			printf(">");
		}
	}
	choosenrow = lastCursorPosition_y - starty + 1;
	return choosenrow;
}