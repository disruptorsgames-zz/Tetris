#include <iostream>

#define NANOSVG_IMPLEMENTATION
#include "../include/nanosvg.h"

#include "headers/engine.hpp"
#include "headers/gamelogic.hpp"

using namespace std;

int Engine::error(string type)
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
Engine::Engine(string title, int w, int h, int x, int y) : Engine()
{
	Window = SDL_CreateWindow(title.c_str(), x, y, w, h, SDL_WINDOW_OPENGL);
	Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
}
Engine::~Engine()
{
	cout << "SDL Quiting..." << endl;
	SDL_DestroyRenderer(Renderer);
	SDL_DestroyWindow(Window);
	SDL_Quit();
}

int Engine::Controls(SDL_Event *event)
{
	SDL_Keycode key = event->key.keysym.sym;
	cout << SDL_GetKeyName(key) << endl;
	return key == SDLK_ESCAPE ? -1 : 0;
}

void Engine::Run()
{
	cout << "SDL Engine run, run engine run..." << endl;

	// game wrappers
	GameLogic logic;
	// ToDo: graphics wrapper

	// event loop
	bool quit = false;
	while (!quit)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
				case SDL_KEYDOWN:
					quit = (Controls(&event) == -1);
					break;
				case SDL_KEYUP:
					break;
				case SDL_QUIT:
					quit = true;
					break;
			}
		}

		// run game logic code every loop
		quit = (logic.Run() == -1);
	}

	// ToDo: put this code in the graphics wrapper
	// drawing stuff
	/*string file = "../resources/drawing.svg";
	cout << "loading '" << file.c_str() << "'" << endl;
	struct NSVGimage *image = nsvgParseFromFile(file.c_str(), "px", 96);
	if (image != nullptr)
		cout << image->width << image->height << endl;
	else
		cout << "unable to load image" << endl;
	nsvgDelete(image);*/
}
