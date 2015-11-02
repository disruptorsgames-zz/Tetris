CXX = g++
SDL_LIB = -L/usr/lib/x86_64-linux-gnu -lSDL2 -Wl,-rpath=/usr/lib
SDL_INCLUDE = -I/usr/include/SDL2

CXXFLAGS = -Wall -c -std=c++11 $(SDL_INCLUDE)
LDFLAGS = $(SDL_LIB)
EXE = SDL_Lesson0

all: $(EXE)

$(EXE): main.o
	$(CXX) $< $(LDFLAGS) -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o && rm $(EXE)
