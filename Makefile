CXX = g++
FLAGS = -Wall -pedantic -std=c++11 
LIB = -lSDL2

.PHONY: pieces

tetris: pieces main.cpp
	$(CXX) main.cpp $(FLAGS) $(LIB) -o tetris

pieces:
	$(MAKE) -C pieces/ all

clean:
	-rm *.0 tetris
	-rm pieces/*.o
