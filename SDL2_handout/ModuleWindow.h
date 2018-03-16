#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__
struct SDL_Window;

// TODO 1: Create the declaration of ModuleWindow class
class ModuleWindow : public Module {
public:
	ModuleWindow() {};
	bool Init() override;
	bool CleanUp() override;
	~ModuleWindow() {};
public:
	SDL_Window* window=nullptr;
}
#endif // __ModuleWindow_H__