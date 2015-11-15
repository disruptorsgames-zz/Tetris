#include <iostream>
#include <list>

#include "engine.hpp"

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
	Engine e("Tetris", 100, 100, 640, 480);
	
	list<int> l;
	l.push_back(0);
	l.push_back(100);
	print(l);

	return 0;
}
