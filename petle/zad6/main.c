#include <stdio.h>
#include "lib.h"
#include "pomocnik.h"


int main()
{
    int rozmiar;
    rozmiar = wczytaj_calkowita();
    rysuj_wzorki(rozmiar);
    return 0;
}
