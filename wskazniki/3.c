/*
Zadeklaruj w programie tablicę dziesięcioelementową wskaźników do tablic pięcioelementowych wskaźników na liczby rzeczywiste. Następnie wczytaj do tej tablicy kilka liczb. Wypisz na wyjście te liczby.
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0;
    int j = 0;
    float d = 7;
    float *tab[5];
    float **tablica[10];
    for (i = 0; i < 5; i++)
	tab[i] = &d;



    for (j = 0; j < 10; j++)
	tablica[j] = &tab;
    printf("%lf", **tablica[j]);

    return 0;
}
