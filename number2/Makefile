all: main.o task2.o
	g++ -g main.o task2.o
	
main.o: main.cpp
	g++ -g -c main.cpp
	
task2.o: task2.cpp
	g++ -g -c task2.cpp

clean:
	rm -rf *.o *.exe
