// flaechenrechner_pro.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "mFuncs.h"
#include "menue.h"
#include<stdio.h>



int main()
{
	int choosenMenu = getMenue();
	gotoxy(1, 20);
	if (choosenMenu == 1) {
		printf("Quadrat");
	}
	if (choosenMenu == 2) {
		printf("Rechteck");
	}
	if (choosenMenu == 3) {
		printf("Dreieck");
	}
    return 0;
}

