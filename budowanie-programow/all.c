#include <stdio.h>

int pobierz_calkowita() {
  int calkowita;
  printf("Podaj liczbe calkowita\n");
  scanf("%d", &calkowita);
  return calkowita;
}

double pobierz_rzeczywista() {
  double rzeczywista;
  printf("Podaj liczbe rzeczywista\n");
  scanf("%lf", &rzeczywista);
  return rzeczywista;
}
