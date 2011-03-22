CFLAGS = -Wall
full : compile testowy test1 clean

compile : macierz.c det.c
	cc -c macierz.c det.c

testowy : macierz.o det.o
	cc -o testowy macierz.o det.o

test1 : testowy test.txt
	./testowy < test.txt

clean : 
	rm -f *.o testowy *~