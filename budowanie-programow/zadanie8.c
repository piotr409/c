#include <stdio.h>
#include <math.h>

int main() {
  int a, min, max, suma, iloczyn,  i;
  printf("Wprowadź 3 liczby całkowite : \n");
  scanf("%i",&a);
  suma = a;
  min = a;
  max = a;
  iloczyn = a;
  for( i = 0; i < 2; i++) {
    scanf("%i",&a);
    if(a < min) min = a;
    if(a > max) max = a;
    suma += a;
    iloczyn *= a;
  }
  printf("Suma wynosi: %suma\n", suma);
  printf("Iloczyn wynosi: %iloczyn\n", iloczyn);
  printf("Najmniejsza liczba to: %min\n", min);
  printf("Największa liczba to: %max\n", max); 
  return 0;
}
