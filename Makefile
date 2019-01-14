
main : Catan.o Player.o Graph.o
	g++ -std=c++11 -o main main.cpp Catan.o Player.o Graph.o

Catan.o : Catan.h Catan.cpp
	g++ -std=c++11 -c Catan.cpp

Player.o : Player.h Player.cpp
	g++ -std=c++11 -c Player.cpp

Graph.o : Graph.h Graph.cpp
	g++ -std=c++11 -c Graph.cpp


clean:
	rm main main.o Catan.o