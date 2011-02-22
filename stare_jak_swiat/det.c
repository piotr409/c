#include<stdio.h>


/* Funkcja obliczajaca wyznacznik macierzy. */
float det(int n, float a[n][n]) {
  if (n == 1)  return a[0][0];
  else {
    float  suma, m[n-1][n-1];
    int  znak, i, j;
    suma = 0.0; znak=1;
    for (i=n-1; i>=0; i=i-1) {
      int  j, k;

      // przygotowanie macierzy  m  (ze skresleniami):
      for (j=0; j<n-1; j=j+1) {
        for (k=0; k<i; k=k+1)  m[j][k] = a[j][k];
        for (k=i; k<n-1; k=k+1)  m[j][k] = a[j][k+1];
      }

      // dodanie kolejnego skladnika do sumy:
      suma = suma + znak*a[n-1][i]*det(n-1, m);
      znak = -znak;
    }
    return suma;
  }
}
