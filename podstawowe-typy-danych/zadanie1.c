#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Max Long = %d, Max Int = %d, Max UInt = %u\n", LONG_MAX,
	   INT_MAX, UINT_MAX);
    int liczba = 2147483649;
    printf("%d\n", liczba);
    return 0;
}
