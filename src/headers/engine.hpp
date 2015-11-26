#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

#include "errorhandling.hpp"

class Engine : ErrorHandling
{
	public:
		Engine();
		Engine(std::string title, int w, int h, int x=SDL_WINDOWPOS_CENTERED, int y=SDL_WINDOWPOS_CENTERED);
		~Engine();

		SDL_Renderer *Renderer;
		SDL_Window *Window;
		SDL_GLContext Context;
		
		// ToDo: add to graphics library
		GLuint Program;

		int Controls(SDL_Event *event);
		void Run();
		void Quit();
};
