#include <stdio.h>
#include "lib.h"
#include "pomocnik.h"

int main()
{

    int a, b;

    a = wczytaj_calkowita();
    b = wczytaj_calkowita();
    rysuj(a, b);
    return 0;
}
