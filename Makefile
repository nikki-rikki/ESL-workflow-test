all: main

main: main.o vector3d.o
	gcc main.o vector3d.o -o main

main.o: main.c vector3d.h
	gcc -c main.c

vector3d.o: vector3d.c vector3d.h
	gcc -c vector3d.c

clean:
	rm -f *.o main
