#include <stdio.h>

int main()
{
    int t[10] = { 1, 3, 5, 7, 9, 0, 2, 4, 6, 8 };
    int *a[10];

    int i, j;

    for (i = 0; i < 10; i++) {
	a[i] = &t[i];
    }

    for (i = 0; i < 10; i++) {
	for (j = i + 1; j < 10; j++) {
	    if (*a[i] > *a[j]) {
		int *temp;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	    }
	}
    }

    for (i = 0; i < 10; i++) {
	printf("%d ", *a[i]);
    }
}
