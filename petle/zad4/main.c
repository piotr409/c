#include <stdio.h>
#include "lib.h"
#include "pomocnik.h"
#define rozmiar 6

int main()
{

    double tablica[rozmiar];
    wczytaj_tablica("Podaj elementy tablicy \n", tablica, rozmiar);
    printf("Największy element to %.4lf \n",
	   najwieksza(tablica, rozmiar));
    printf("Najmniejszy element to %.4lf \n",
	   najmniejsza(tablica, rozmiar));
    return 0;
}
