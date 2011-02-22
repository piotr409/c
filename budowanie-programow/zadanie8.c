#include <stdio.h>
#include <math.h>
/*Program, który prosi użytkownika o wprowadzenie trzech liczb z klawiatury, a następnie wypisze sumę, iloczyn, najmniejszą i największą z wprowadzonych liczb. */
int main() {
  int a, min, max, suma, iloczyn, i;
  printf("Wprowadź 3 liczby całkowite : \n");
  scanf("%i", &a);
  suma = min = max = iloczyn = a;
  for( i = 0; i < 2; i++) {
    scanf("%i", &a);
    if(a < min) min = a;
    if(a > max) max = a;
    suma += a;
    iloczyn *= a;
  }
  printf("Suma wynosi: %i\n", suma);
  printf("Iloczyn wynosi: %i\n", iloczyn);
  printf("Najmniejsza liczba to: %i\n", min);
  printf("Największa liczba to: %i\n", max); 
  return 0;
}
