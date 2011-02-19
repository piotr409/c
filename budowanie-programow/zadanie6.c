#include <stdio.h>
#include <math.h>

float kwadratowy(float pierwiastek){
  if (pierwiastek==.0)
  {
      return .0;

  } return sqrt(pierwiastek);
}

int main(){

  float b;
  scanf("%f",&b);
  if (b<0.0)
 {
    printf("Wystąpił błąd, liczba %lf jest mniejsza od 0.\n",b);
    return 0;
 }
  printf("Pierwiastek z liczby %lf wynosi %lf\n",b,kwadratowy(b));
  return 0;
}
