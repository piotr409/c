#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int dzien, miesiac, rok;
int wczytaj_date(char *prompt)
{
    int pom;

    printf(prompt);
    pom = scanf("%d-%d-%d", &dzien, &miesiac, &rok);
    if (pom != 3) {
	printf("Niepoprawny format daty!\n");
	return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

void czas(int d, int m, int r)
{
    time_t czas_tera, czas_ur;
    struct tm *data_ur;
    double roznica;
    time(&czas_ur);
    data_ur = localtime(&czas_ur);
    data_ur->tm_year = r - 1900;
    data_ur->tm_mon = m - 1;
    data_ur->tm_mday = d;
    czas_ur = mktime(data_ur);
    time(&czas_tera);
    roznica = difftime(czas_tera, czas_ur);
    printf("Zyjesz juz %0.lf sekund\n ", roznica);

}
