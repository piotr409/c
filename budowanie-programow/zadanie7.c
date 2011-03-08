#include <stdio.h>
#include <math.h>
#include "kwadratowy.h"
#include "odwrotnosc.h"
/* program, który wczyta liczbę rzeczywistą i wypisze jej odwrotność oraz jej pierwiastek kwadratowy. */


int main() {

  double b;
  scanf("%lf", &b);
  if (b < .0) {
    odwrotnosc(b);
    printf("Wystąpił błąd, liczba %f jest mniejsza od 0. Nie ma dla niej pierwiastka rzeczywistego.\n", b);
    return 0;
  }
  odwrotnosc(b);
  printf("Pierwiastek z liczby %f wynosi %f\n", b, kwadratowy(b));
  return 0;
}
