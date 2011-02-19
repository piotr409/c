#include <stdio.h>
#include <math.h>

void odwrotnosc(float liczba) {
  if (liczba == .0) {
    printf("Liczba %lf nie posiada odwrotności.\n", liczba);
    
  }else {
    printf("Liczba odwrotna do liczby %lf to %lf\n", liczba, 1 / liczba);
  }
}

float kwadratowy(float pierwiastek){
  if (pierwiastek == .0) {
      return .0;

  } return sqrt(pierwiastek);
}

int main() {

  float b;
  scanf("%f", &b);
  if (b < .0) {
    odwrotnosc(b);
    printf("Wystąpił błąd, liczba %lf jest mniejsza od 0. Nie ma dla niej pierwiastka rzeczywistego.\n", b);
    return 0;
  }
  odwrotnosc(b);
  printf("Pierwiastek z liczby %lf wynosi %lf\n", b, kwadratowy(b));
  return 0;
}
