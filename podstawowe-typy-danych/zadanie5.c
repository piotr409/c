#include <stdio.h>
#include <string.h>
#define cal 2.54

int main()
{
    double wzrost;
    char znak[2];

    printf("Podaj Twój wzrost np.( 190 cm , 74.8 in )\n");
    scanf("%lf", &wzrost);
    scanf("%s", znak);
    if (strcmp(znak, "in") == 0) {
	wzrost *= cal;
	strcpy(znak, "cm");
    } else if (strcmp(znak, "cm") == 0) {
	wzrost /= cal;
	strcpy(znak, "in");
    } else {
	printf("Podano źle oznaczenie wzrostu\n");
	return 0;
    }
    printf("%.1f %s\n", wzrost, znak);
    return 0;
}
