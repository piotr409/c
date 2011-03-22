#include <stdio.h>

int oblicz_sekundy(int wiek, int rok)
{
    int dni = 0;
    int i;
    for (i = rok - 1; i >= rok - wiek; i--) {
	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
	    dni += 366;
	} else
	    dni += 365;

    }
    return dni * 24 * 60 * 60;

}
