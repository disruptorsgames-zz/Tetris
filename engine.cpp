#include <iostream>

#define NANOSVG_IMPLEMENTATION
#include "nanosvg.h"

#include "engine.hpp"
#include "input.hpp"

using namespace std;

int Engine::_error(string type)
{
	cout << "SDL " << type << " Error: " << SDL_GetError() << endl;
	SDL_Quit();
	return 1;
}

Engine::Engine()
{
	cout << "SDL Initializing..." << endl;
	SDL_Init(SDL_INIT_VIDEO);
}
Engine::Engine(string title, int x, int y, int w, int h)
	: Engine()
{
	// ToDo: handle errors
	_window = SDL_CreateWindow(title.c_str(), x, y, w, h, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
	_renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	string file = "drawing.svg";
	struct NSVGimage *image = nsvgParseFromFile(file.c_str(), "px", 96.0f);
	cout << "(" << image->width << "," << image->height << ")" << endl;
	/*for (NSVGshape shape = image->shapes; shape != NULL; shape = shape->next)
	{
		for(path = shape->paths; path != NULL; path = path->next)
		{
			for(i = 0; i < path->npts - 1; i += 3) 
			{
				float *p = &path->pts[i * 2];
				drawCubicBez(p[0], p[1], p[3], p[4], p[5], p[6], p[7]);				
			}
		}
	}*/

	Input input;
}

Engine::~Engine()
{
	cout << "SDL Quiting..." << endl;
	SDL_DestroyRenderer(_renderer);
	SDL_DestroyWindow(_window);
	SDL_Quit();
}
