CXX = g++
FLAGS = -Wall -pedantic -std=c++11 
LIB = -lSDL2

.PHONY: pieces

tetris: pieces main.cpp engine.cpp
	$(CXX) main.cpp engine.cpp $(FLAGS) $(LIB) -o tetris

pieces:
	$(MAKE) -C pieces/ all

clean:
	-rm *.o tetris
	-rm pieces/*.o
