#include <stdio.h>
#include <math.h>
/* 
Program, który wypisze tabelkę wartości pierwiastka kwadratowego. Program ma pytać o
    * wartość poczatkową
    * wartość końcową
    * krok dla argumentu
i wypisywać tabelką w podanym zakresie. 
*/ 

double pierw(double zmienna) {
  return sqrt(zmienna);
}

int main() {
  double pocz, konc, krok, temp;
  printf("Podaj wartość początkową, konćową oraz krok do argumentu.\n");
  scanf("%lf", &pocz);
  scanf("%lf", &konc);
  scanf("%lf", &krok);

  if (pocz > konc) {
    temp = pocz;
    pocz = konc; 
    konc = temp;
  }
  if(krok < .0) krok *= -1.0;
  while(pocz <= konc){
    if(pocz < .0) {
      printf(" %.4lf   brak\n", pocz);
    }else {
      printf(" %.4lf  %.4lf\n", pocz, pierw(pocz));
    }
    
    pocz += krok;
  }

  return 0;
}
