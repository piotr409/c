CFLAGS = -Wall -ansi

compile : main.c lib.c pomocnik.c
	gcc -o program main.c lib.c pomocnik.c

clean:
	rm -f program *~

test :
	echo "1 2 3 4 5 6">test1.wej
	echo "0 -0.5 -1 2.2222 -3.15435 5.6">test2.wej
	./program<test1.wej
	./program<test2.wej
	rm -f *.wej
