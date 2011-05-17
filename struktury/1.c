#include <stdlib.h>
#include <stdio.h>
#include"lib.h"


int main()
{
    struct rect rect1;
    struct rect rect2;
    wczytaj_prostokat(&rect1);
    wczytaj_prostokat(&rect2);

    sprawdz_wynik(rectinrect(rect1, rect2));

}
