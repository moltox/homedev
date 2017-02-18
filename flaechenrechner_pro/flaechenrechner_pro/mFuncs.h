#pragma once

#include<Windows.h>


int getKey() {
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

void gotoxy(int x, int y) {
	COORD newPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), newPosition);
}

void waitforenter() {
	int enter;

	while ((enter = getKey()) != 13) {}

}
