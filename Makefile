CXX = g++
FLAGS = -Wall -pedantic -std=c++11 
LIB = -lSDL2

tetris: main.cpp
	$(CXX) main.cpp $(FLAGS) $(LIB) -o tetris
clean:
	rm *.o tetris
