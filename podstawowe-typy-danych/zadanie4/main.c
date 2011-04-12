#include<stdio.h>
#include<stdlib.h>
#include"funkcje.h"

int main()
{
    extern int dzien, miesiac, rok;
    int data;
    data = wczytaj_date("Podaj date w formacie: dd-mm-rrrr \n");
    if (data == 0) {
	czas(dzien, miesiac, rok);
    }
    return EXIT_SUCCESS;
}
