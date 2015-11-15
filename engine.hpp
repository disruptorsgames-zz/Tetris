#include <string>
#include <SDL2/SDL.h>

//#include "nanosvg.h"

class Engine
{
	public:
		Engine();
		Engine(std::string title, int x, int y, int w, int h);
		~Engine();
	private:
		SDL_Renderer *_renderer;
		SDL_Window *_window;

		int _error(std::string type);

};
