#pragma once

/*
Menue call by
int getMenue()

*/

#include "menuechooser.h"

const int START_X = 10;
const int START_Y = 10;
const int LAST_Y = 12;

void paintMenu() {
	
	gotoxy(START_X - 5, START_Y - 3);
	printf("+------ MENU -----------+");
	for (int i = START_Y - 2; i < START_Y + 8;i++) {
		gotoxy(START_X - 5, i);
		printf("|                       |");
	}
	gotoxy(START_X - 5, START_Y + 8);
	printf("+-----------------------+");

	gotoxy(START_X + 3, START_Y);
	printf("Quadrat");
	gotoxy(START_X + 3, START_Y + 1);
	printf("Rechteck");
	gotoxy(START_X + 3, START_Y + 2);
	printf("Dreieck");
}

int getMenue() {
	int menuerow;
	paintMenu();
	menuerow = menuechooser(START_X,START_X,LAST_Y);
	return menuerow;
}