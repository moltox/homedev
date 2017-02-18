#pragma once

int quadrat() {
	float a, ergebnis;
	printf("Quadrat\n");
	printf("Bitte die Länge von a eingeben: \n");
	scanf("%f", &a);
	ergebnis = a * a;
	printf("Die Fläche ist %.2f m2\n", ergebnis);
	printf("\n\nBitte Enter druecken um zum Menue zurueck zu gelangen");
	waitforenter();
	return 0;
}

int rechteck() {
	// a * b
	float a, b, ergebnis;
	printf("Rechteck");
	printf("Bitte die Länge von a eingeben: \n");
	scanf("%f", &a);
	printf("Bitte die Länge von b eingeben: \n");
	scanf("%f", &b);
	ergebnis = a * b;
	printf("Die Fläche ist %.2f m2\n", ergebnis);
	printf("\n\nBitte Enter druecken um zum Menue zurueck zu gelangen");
	waitforenter();
	return 0;
}

int dreieck() {
	// a * h / 2
	float a, h, ergebnis;
	printf("Dreieck\n");
	printf("Geben sie die Seitenlänge a ein \n");
	scanf("%f", &a);
	printf("Geben sie die höhe ein \n");
	scanf("%f", &h);
	ergebnis = a*h / 2;
	printf("Fläche ist %.2f, m2\n", ergebnis);
	printf("\n\nBitte Enter druecken um zum Menue zurueck zu gelangen");
	waitforenter();
	return 0;
}