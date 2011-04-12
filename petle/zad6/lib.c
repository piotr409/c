#include <stdio.h>

void rysuj_wzorki(int rozmiar)
{
    int i, k;

    printf("\n");

    for (i = 0; i < rozmiar; i++) {

	for (k = 0; k < rozmiar; k++) {
	    if (k <= i) {
		putchar('*');
	    } else {
		putchar(' ');
	    }

	}
	printf("\n");
    }
    printf("\n");
    for (i = rozmiar; i > 0; i--) {

	for (k = 0; k < rozmiar; k++) {
	    if (k < i) {
		putchar('*');
	    } else {
		putchar(' ');
	    }

	}
	printf("\n");
    }

    printf("\n");
    for (i = 0; i < rozmiar; i++) {

	for (k = 0; k < rozmiar; k++) {
	    if (k >= i) {
		putchar('*');
	    } else {
		putchar(' ');
	    }

	}
	printf("\n");
    }

    for (i = rozmiar; i >= 0; i--) {

	for (k = 0; k < rozmiar; k++) {
	    if (k >= i) {
		putchar('*');
	    } else {
		putchar(' ');
	    }

	}
	printf("\n");
    }

}
