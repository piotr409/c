#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void spalanie(unsigned int u, double x, double y)
{
    double spal = (x * 100) / (double) u;
    printf("Zatankowane : %.2f litrów, koszt 1 litra : %.2f \n", x, y);
    printf("Spalanie paliwa na 100km : %.2f litrów\n", spal);
    printf("Koszt przejechania 100km : %.2f zł\n\n", spal * y);

}
void przetworz_informacje(double l, double m, unsigned int ui)
{
    printf("--------------------------------\n");
    printf(" Koszt 1 litra paliwa : %.2f zł\n", l / m);
    printf(" Łączna ilość przejechanych kilometrów : %u \n", ui);
    printf(" Łączna ilość zatankowanego paliwa : %.2f \n", m);
    printf(" Koszt łącznego tankowania : %.2f zł\n", m * (l / m));
    printf(" Średnie spalanie na 100km : %.2f litrów \n",
	   (m * 100) / (double) ui);

}
