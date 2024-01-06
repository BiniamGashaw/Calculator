calculator: calculator.o main.o
	g++ -o calculator calculator.o main.o

main.o: main.cpp
	g++ -c main.cpp

calculator.o: calculator.h calculator.cpp
	g++ -c calculator.cpp

clean: 
	rm *.o calculator