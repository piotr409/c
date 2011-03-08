#include <stdio.h>
#include <math.h>
#include "odwrotnosc.h"

void odwrotnosc(double liczba) {
    if ( liczba == .0) {
	printf("Liczba nie posiada odwrotnosci\n");
    }else {
	printf("Liczba odwrotna to %f\n", 1/liczba);
    }
}