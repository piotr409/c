#include <stdio.h>
struct point {
  int x;
  int y;
};
struct rect {
  struct point ll;  /* lower left */
  struct point ur;  /* upper right */
};
struct rect minspan(struct rect r1, struct rect r2) {
	int x1,x2,y1,y2;
	if(r1.ll.x>r2.ll.x)
{
 x1 = r2.ll.x;
} else x1 = r1.ll.x;

	if(r1.ur.x>r2.ur.x)
{
 x2 = r1.ur.x;
} else x2 = r2.ur.x;

	if(r1.ll.y>r2.ll.y)
{
 y1 = r2.ll.y;
} else y1 = r1.ll.y;

	if(r1.ur.y>r2.ur.y)
{
 y2 = r1.ur.y;
} else y2 = r2.ur.y;

struct rect r3 = { {x1, y1}, {x2, y2} };
  return r3; 
};
/* dodać kilka testów */
int main (int argc, char *argv[]) {
  struct rect r1 = { {0, 0}, {2, 2} };
  struct rect r2 = { {1, 1}, {3, 3} };
  struct rect rr;
  rr = minspan(r1, r2);
  printf("rr = ll[%d,%d], ul[%d,%d]\n", rr.ll.x, rr.ll.y, rr.ur.x, rr.ur.y);

  return 0;
}
