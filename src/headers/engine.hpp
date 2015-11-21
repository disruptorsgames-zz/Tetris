#include <string>
#include <SDL2/SDL.h>

class Engine
{
	public:
		Engine();
		Engine(std::string title, int w, int h, int x=SDL_WINDOWPOS_CENTERED, int y=SDL_WINDOWPOS_CENTERED);
		~Engine();

		SDL_Renderer *Renderer;
		SDL_Window *Window;
		SDL_GLContext Context;
	
		int Controls(SDL_Event *event);	
		void Run();
		void Quit();
	private:
};
