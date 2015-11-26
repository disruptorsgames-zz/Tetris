#include <iostream>

#include "headers/gamelogic.hpp"

using namespace std;

GameLogic::GameLogic()
{
	this->name = "Game Logic";
	cout << "Game Logic Initializing..." << endl;
}

GameLogic::~GameLogic()
{
	cout << "Game Logic Quitting..." << endl;
}

int GameLogic::Run()
{
	return 0;
}
