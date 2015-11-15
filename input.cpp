#include <iostream>
#include <SDL2/SDL.h>

#include "input.hpp"

using namespace std;

void Input::_getControls(SDL_Event e)
{
	switch(e.key.keysym.sym)
	{
		case SDLK_LEFT:
			cout << "LEFT!?" << endl;
			break;
		case SDLK_RIGHT:
			cout << "RIGHT!?" << endl;
			break;
		case SDLK_SPACE:
			cout << "SPACE!?" << endl;
			break;
		case SDLK_ESCAPE:
			_quit = true;
			break;
	}
}

Input::Input()
{
	cout << "Input Initializing..." << endl;

	while (!_quit)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch(event.type)
			{
				case SDL_KEYDOWN:
					_getControls(event);
					break;
				case SDL_KEYUP:
					break;
				case SDL_QUIT:
					_quit = true;
					break;
				default:
					break;
			}
		}
	}
}

Input::~Input()
{
	cout << "Input Quitting..." << endl;
}
