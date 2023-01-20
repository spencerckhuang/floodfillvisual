CC = g++
CONSERVATIVE_FLAGS = -std=c++20 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)

main: main.o Graph.o Node.o
	$(CC) -o FloodFill main.o Graph.o Node.o

main.o: main.cpp Graph.h Node.h
	$(CC) -c main.cpp

Graph.o: Graph.cpp Graph.h Node.h
	$(CC) -c Graph.cpp

Node.o: Node.cpp Node.h
	$(CC) -c Node.cpp

clean: 
	rm -f *.o FloodFill
