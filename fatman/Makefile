main:main.o term.o rectangle.o
    gcc -o main  main.o term.o rectangle.o

main.o:main.cpp
	gcc	-c main.cpp

term.o:term.cpp term.h
	gcc	-c ./src/term.cpp ./include/term.h

rectangle.o:rectangle.cpp rectangle.h
	gcc -c ./src/rectangle.cpp ./include/rectangle.h

clean:
    rm -f main