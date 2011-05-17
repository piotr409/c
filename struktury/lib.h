#ifndef __LIB_H__
#define __LIB_H__

struct point {
    int x;
    int y;
};

struct rect {
    struct point ll;		/* lower left */
    struct point ur;		/* upper right */
};
int ptinrect(struct point p, struct rect r);
void wczytaj_prostokat(struct rect *rect1);
int rectinrect(struct rect r1, struct rect r2);
int sprawdz_wynik(int wynik);


#endif
