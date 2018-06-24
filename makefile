all: GCD clean

GCD: practice7.c
	gcc -ansi -Wall -pedantic -c gcd.c
	gcc -ansi -Wall -pedantic practice7.c gcd.o -o GCD

# make clean to remove executables
clean:
	rm -f *.o *.exe *~