#include "Enemy.h"
#include "GameObject.h"
#include "../Game.h"
#include "../TextureManager.h"
#include "../InputHandler.h"
void Enemy::update()
	{
	//	std::cout<<"update Enemy object"<<std::endl;
	m_position.setX(m_position.getX()+m_velocity.getX());
	m_position.setY(m_position.getY()+m_velocity.getY());
	if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_D))
	{
	m_velocity.setX(2);
	}
	if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_A))
	{
	m_velocity.setX(-2);
	}
	if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_W))
	{
	m_velocity.setY(-2);
	}
	if(TheInputHandler::Instance()->isKeyDown(SDL_SCANCODE_S))
	{
	m_velocity.setY(2);
	}

		m_currentFrame = int(((SDL_GetTicks() / 100) % 6));

	}
Enemy::Enemy() :SDLGameObject()
{
}
void Enemy::draw()
{
	SDLGameObject::draw();
}
void Enemy::clean(){
}
