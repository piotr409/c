#include <stdio.h>

void rysuj(int a, int b)
{
    int i, k, l;
    for (l = 0; l < b; l++) {
	if (l % 2 == 1) {
	    printf(" ");
	    for (i = 0; i < a; i++) {
		printf("* ");

	    }
	    printf("\n");
	} else {
	    for (k = 0; k < a; k++) {
		printf("* ");

	    }
	    printf("\n");

	}

    }
}
