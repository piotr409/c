#include <stdio.h>

void wczytaj_tablica(char *prompt, double *tablica, int rozmiar)
{
    int i;
    printf(prompt);
    for (i = 0; i < rozmiar; i++) {
	scanf("%lf", &tablica[i]);
    }

}
