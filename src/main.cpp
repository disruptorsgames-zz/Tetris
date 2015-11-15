#include <iostream>
#include <list>

#include "headers/engine.hpp"

using namespace std;

void print(list<int> l)
{
	for(auto const &item : l)
	{
		cout << item << endl;
	}
}

int main (int argc, char *args[])
{
	// sdl engine
	Engine e("Tetris", 1024, 768);
	e.Run();

	// testing lists
	list<int> l;
	l.push_back(0);
	l.push_back(100);
	print(l);

	return 0;
}
