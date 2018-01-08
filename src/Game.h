#ifndef __Game__
#define __Game__
#include<SDL.h>
class Game
{
public:
Game() {
	m_bRunning=false;
}
~Game() {}
bool init(const char*, int, int, int ,int , int);
void render();
void update(){}
void handleEvents2();
void clean();
// a function to access the private running variable
bool running() { return m_bRunning; }
private:
SDL_Window* m_pWindow;
SDL_Renderer* m_pRenderer;
SDL_Texture* m_pTexture; // the new SDL_Texture variable
SDL_Rect m_sourceRectangle; // the first rectangle
SDL_Rect m_destinationRectangle; // another rectangle

bool m_bRunning;
};

#endif /* defined(__Game__) */
