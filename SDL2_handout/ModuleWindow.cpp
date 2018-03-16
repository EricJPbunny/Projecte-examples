#include "Globals.h"
#include "Application.h"
#include"SDL/include/SDL.h"
#include "ModuleWindow.h"


// TODO 2: Init the library and check for possible error
// using SDL_GetError()

bool ModuleWindow::Init() 
{
	int check = SDL_Init(SDL_INIT_VIDEO);
	if (check < 0) {
		SDL_GetError();
		return false;
	}
	window = SDL_CreateWindow(TITLE,0,0,SCREEN_WIDTH,SCREEN_HEIGHT,FULLSCREEN);
		return true;
}
bool ModuleWindow::CleanUp() 
{
	SDL_Quit;
}
// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

