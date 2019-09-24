/** @example sdlhelloworld.cpp
 * A description of the SDL2 example file, 
 * show a window with a title bar display "Hello World" 
 
 * compile
   $ gcc -o sdlhelloworld sdlhelloworld.cpp -lSDL2
   or
   $ gcc -o sdlhelloworld sdlhelloworld.cpp `sdl2-config --cflags --libs`
 */
 
#include <SDL2/SDL.h>
#include <stdio.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480


int main(int argc, char** argv) 
{
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        perror("could not initialize sdl2\n");
        return 1;
    }
    window = SDL_CreateWindow("Hello World",
			    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			    SCREEN_WIDTH, SCREEN_HEIGHT,
			    SDL_WINDOW_SHOWN);
    if (window == NULL) {
        perror("could not create window\n");
        return 1;
    }

    screenSurface = SDL_GetWindowSurface(window);
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);
    SDL_Delay(5000);
    SDL_DestroyWindow(window);
    SDL_Quit( );

    return 0;
}
