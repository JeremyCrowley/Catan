
main : Catan.o Player.o Graph.o Visualize.o
	g++ -std=c++11 -o main main.cpp Catan.o Player.o Graph.o Visualize.o -I/Library/Frameworks/SDL2.framework/Headers -F/Library/Frameworks -framework SDL2 -I/Library/Frameworks/SDL2_ttf.framework/Headers -framework SDL2_ttf

Catan.o : Catan.h Catan.cpp
	g++ -std=c++11 -c Catan.cpp

Player.o : Player.h Player.cpp
	g++ -std=c++11 -c Player.cpp

Graph.o : Graph.h Graph.cpp
	g++ -std=c++11 -c Graph.cpp

Visualize.o : Visualize.h Visualize.cpp
	g++ -std=c++11 -c Visualize.cpp


clean:
	rm main Catan.o