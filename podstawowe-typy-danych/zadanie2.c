#include <stdio.h>

int main()
{
    int liczba;
    printf("Podaj kod ASCII : ");
    scanf("%i", &liczba);
    if (liczba == 0) {
	printf("znak niedrukowalny\n");
	return 0;
    }
    if (liczba > 127 || liczba < 0) {
	printf("Nie ma takiej liczby w tabeli ASCII\n");
	return 0;
    }
    char wynik = (char) liczba;
    printf("%c\n", wynik);
    return 0;

}
