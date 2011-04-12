CFLAGS = -Wall -ansi

compile : main.c lib.c pomocnik.c
	gcc -o program main.c lib.c pomocnik.c

clean:
	rm -f program *~

test :
	echo "6 6">test1.wej
	echo "5 10">test2.wej
	./program<test1.wej
	./program<test2.wej
	rm -f *.wej
