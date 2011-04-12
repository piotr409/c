#include<stdio.h>
#include<stdlib.h>
#include"plik.h"

int main(int argc, char *argv[])
{
    FILE *in_handle;
    char bufor[BUFSIZ];
    unsigned int ui[10000], sui; int it  = sui = 0;
    double x[10000], y[10000], licznik, mianownik;
  in_handle = fopen(argv[1], "r");
	licznik = mianownik = 0;
  while (fgets(bufor, BUFSIZ, in_handle) != NULL) {
    sscanf(bufor, "%u %lf %lf", &ui[it], &x[it], &y[it]);
	if(ui[it]!=0) {
	spalanie(ui[it], x[it], y[it]);
	licznik = licznik + ( x[it] * y[it] ); sui += ui[it]; mianownik += x[it];
	it++;
	}
  }
	przetworz_informacje(licznik, mianownik,sui);
  fclose(in_handle);
    return EXIT_SUCCESS;
}
