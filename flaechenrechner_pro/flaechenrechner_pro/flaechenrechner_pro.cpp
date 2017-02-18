// flaechenrechner_pro.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "mFuncs.h"
#include "menue.h"
#include "flaechen_funcs.h"
#include<stdio.h>






int main()
{
	while (1) {
		int choosenMenu = getMenue();
		system("cls");
		gotoxy(1, 1);
		if (choosenMenu == 1) {
			quadrat();
			system("cls");
		}
		if (choosenMenu == 2) {
			rechteck();
			system("cls");
		}
		if (choosenMenu == 3) {
			dreieck();
			system("cls");
		}
	}
    return 0;
}

