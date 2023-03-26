all: a.out b.out

b.out: node.o
	g++ node.o -o b.out -lzmq

a.out: main.o
	g++ main.o -o a.out -lzmq

node.o: node.cpp
	g++ -c node.cpp node.o

main.o: main.cpp
	g++ -c main.cpp main.o

clean:
	rm -f *.o
	rm -f *.out

clean_no_out:
	rm -f *.o
