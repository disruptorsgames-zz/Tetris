#include <iostream>
#include <SDL2/SDL.h>

Uint32 callback(Uint32 interval, void *param);

int main(int, char**)
{
    if (SDL_Init(SDL_INIT_TIMER) != 0)
    {
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    Uint32 delay = 1000;

    SDL_TimerID my_timer_id = SDL_AddTimer(delay, callback, NULL);

    if (my_timer_id == 0)
    {
        std::cout << "SDL_AddTimeer Error:" << SDL_GetError() << std::endl;
    }

    while(1);

    SDL_Quit();

    return 0;
}

Uint32 callback(Uint32 interval, void *param)
{
    std::cout << "1 second tick." << std::endl;

    return interval;
}
