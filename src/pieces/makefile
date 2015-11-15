$(CXX) = clang

all: piece.o j_piece.o

piece.o: piece.cpp piece.hpp
	$(CXX) -c piece.cpp

j_piece.o: j_piece.cpp j_piece.hpp
	$(CXX) -c j_piece.cpp

main: main.cpp piece.o j_piece.o
	$(CXX) -o main main.cpp piece.o j_piece.o
