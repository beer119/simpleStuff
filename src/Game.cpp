#include "Game.h"
#include <SDL_image.h>
#include <iostream>
using namespace std;
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{
	// attempt to initialize SDL
	if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
	std::cout << "SDL init success5\n";

	m_pWindow = SDL_CreateWindow(title, xpos, ypos,width, height, flags);
	std::cout << "m_pWindow\n";
	if(m_pWindow != 0) // window init success
	{
	std::cout << "window creation success\n";
	m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);
	if(m_pRenderer != 0) // renderer init success
	{
	std::cout << "renderer creation success\n";
	SDL_SetRenderDrawColor(m_pRenderer,
	255,255,255,255);
	}
	else
	{
	std::cout << "renderer init fail\n";
	return false; // renderer init fail
	}
	}
	else
	{
	std::cout << "window init fail\n";
	return false; // window init fail
	}
	}
	else
	{
	std::cout << "SDL init fail\n";
	return false; // SDL init fail
	}
	std::cout << "init successqq33\n";
	m_bRunning = true; // everything inited successfully,	start the main loop

	SDL_Surface* pTempSurface =IMG_Load("spritelib_gpl/shooter/invader.png");
	m_pTexture = SDL_CreateTextureFromSurface(m_pRenderer,pTempSurface);
	SDL_FreeSurface(pTempSurface);
	cout<<m_sourceRectangle.w<<endl;
	cout<<m_sourceRectangle.h<<endl;
	SDL_QueryTexture(m_pTexture, NULL, NULL,&m_sourceRectangle.w, &m_sourceRectangle.h);
	m_destinationRectangle.x = m_sourceRectangle.x = 0;
	m_destinationRectangle.y = m_sourceRectangle.y = 0;
	m_destinationRectangle.w = m_sourceRectangle.w;
	m_destinationRectangle.h = m_sourceRectangle.h;
	m_destinationRectangle.w = m_sourceRectangle.w=140;
	m_destinationRectangle.h = m_sourceRectangle.h=80;

	cout<<m_sourceRectangle.w<<endl;
	cout<<m_sourceRectangle.h<<endl;
	return true;

}

void Game::render()
{
	cout<<"m_destinationRectangle.h"<<endl;
	SDL_RenderClear(m_pRenderer); // clear the renderer tothe draw color

	m_destinationRectangle.x=m_destinationRectangle.x+1;
	m_destinationRectangle.y=m_destinationRectangle.y+1;
	m_destinationRectangle.w = m_destinationRectangle.w+1;
	m_destinationRectangle.h =m_destinationRectangle.h+1;
	SDL_Delay(6);
	SDL_RenderCopy(m_pRenderer, m_pTexture, &m_sourceRectangle,	&m_destinationRectangle);

	SDL_RenderPresent(m_pRenderer); // draw to the screen


}

void Game::handleEvents2()
{
	SDL_Event event;
	if(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				m_bRunning = false;
				break;


		default:
		break;
		}
	}

}
void Game::clean()
{
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(m_pWindow);
	SDL_DestroyRenderer(m_pRenderer);
	SDL_Quit();
}

