CXX = g++
FLAGS = -g -Wall -pedantic -std=c++11 
LIB = -lSDL2

CPP = src/*.cpp
HPP = src/headers/*.hpp

tetris: $(HPP) $(CPP)
	$(CXX) $(HPP) $(CPP) $(FLAGS) $(LIB) -o tetris

.PHONY: src/pieces
pieces:
	$(MAKE) -C src/pieces/ all

clean:
	find | egrep '(\.o|tetris)' | xargs -i rm -f {}
