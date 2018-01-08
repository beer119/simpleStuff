#include "Game.h"
int main(int argc, char* argv[])
{
	Game * newGame= new Game;
	newGame->init("Chapter 1", 100, 100, 640, 480, SDL_WINDOW_MAXIMIZED);
	while(newGame->running())
	{
		newGame->handleEvents2();
		newGame->render();
	}

	newGame->clean();


}
