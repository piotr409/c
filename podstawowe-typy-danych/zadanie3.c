#include <stdio.h>
#define rok 2011 // Teraźniejszy rok

int main() {
  int i, lata, dni;
  printf("Podaj Twój wiek w latach. \n");
  scanf("%d", &lata);
  dni = 0;
  for(i = rok - 1; i >= rok - lata; i--) {
    if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
      dni += 366;
    }else dni += 365;

  }
  double wynik = (double) dni * 24 * 60 * 60;
  printf("Żyjesz %lf sekund. \n", wynik);
 return 0;
}
