#include <stdio.h>

double najwieksza(double tablica[], int rozmiar)
{
    double max = tablica[0];
    int i;
    for (i = 1; i < rozmiar; i++) {
	if (tablica[i] > max)
	    max = tablica[i];
    }

    return max;
}

double najmniejsza(double tablica[], int rozmiar)
{
    double min = tablica[0];
    int i;
    for (i = 1; i < rozmiar; i++) {
	if (tablica[i] < min)
	    min = tablica[i];
    }

    return min;
}
