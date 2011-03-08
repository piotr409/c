#include <stdio.h>
#include <math.h>
#include "kwadratowy.h"
/*program, który wczyta liczbę rzeczywistą i wypisze jej pierwiastek kwadratowy. */

int main() {

  double b;
  scanf("%lf", &b);
  if (b < .0) {
    printf("Wystąpił błąd, liczba %lf jest mniejsza od 0.\n", b);
    return 0;
  }
  printf("Pierwiastek z liczby %lf wynosi %f\n", b, kwadratowy(b));
  return 0;
}
