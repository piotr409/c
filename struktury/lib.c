#include <stdlib.h>
#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rect {
    struct point ll;		/* lower left */
    struct point ur;		/* upper right */
};

/* ptinrect: zwróć 1 jeśli p należy do r, 0 jeśli nie należy */
int ptinrect(struct point p, struct rect r)
{
    return p.x >= r.ll.x && p.x < r.ur.x && p.y >= r.ll.y && p.y < r.ur.y;
}

void wczytaj_prostokat(struct rect *rect1)
{
    scanf("%d", &rect1->ll.x);
    scanf("%d", &rect1->ll.y);
    scanf("%d", &rect1->ur.x);
    scanf("%d", &rect1->ur.y);


}

int rectinrect(struct rect r1, struct rect r2)
{
    return (ptinrect(r2.ll, r1)) && (ptinrect(r2.ur, r1));
}

int sprawdz_wynik(int wynik)
{
    if (wynik == 0) {
	printf("Prostokąt nie jest zawarty wewnątrz prostokąta\n");
    } else
	printf("Prostokąt jest zawarty wewnątrz prostokąta\n");

}
