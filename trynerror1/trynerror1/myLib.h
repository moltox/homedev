#pragma once

#include<stdlib.h>
#include<Windows.h>



void gotoxy(int x, int y) {
	COORD newPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), newPosition);
}


int getKey()  {
	int result;
	result = getch();
	if (result == 0) {
		result = 256 + getch();
	}
	else if (result == 224) {
		result = 512 + getch();
	}
	return result;
}