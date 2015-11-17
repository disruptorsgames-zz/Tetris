CXX = g++
FLAGS = -g -Wall -pedantic -std=c++11 
LIB = -lSDL2

.PHONY: src/pieces

tetris: src/pieces src/main.cpp src/engine.cpp src/gamelogic.cpp include/nanosvg.h
	$(CXX) src/main.cpp src/engine.cpp src/gamelogic.cpp  $(FLAGS) $(LIB) -o tetris

pieces:
	$(MAKE) -C src/pieces/ all

clean:
	-rm *.o tetris
	-rm pieces/*.o
