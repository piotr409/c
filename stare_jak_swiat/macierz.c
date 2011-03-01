#include <stdio.h>
#include "det.h"

main () {
  int  rozmiar, i, j;
  printf("\n  Rozmiar macierzy == "); scanf("%i", &rozmiar);
  float mac[rozmiar][rozmiar];
  printf("\n  Wyrazy macierzy:\n");
  for (i=0; i<rozmiar; i=i+1) {
    printf("   wiersz %i: ", i);
    for (j=0; j<rozmiar; j=j+1)  scanf("%f", &mac[i][j]);
  }
  printf("\n  Wyznacznik wynosi  %f\n\n", det(rozmiar, mac));
}
