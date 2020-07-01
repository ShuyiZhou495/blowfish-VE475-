all: c2 clean

c2: main.o
	g++ -o c2 main.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f *.o