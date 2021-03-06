#include "Player.h"
#include "SDLGameObject.h"
#include "../Game.h"
#include "../TextureManager.h"
#include "GameObject.h"
SDLGameObject::SDLGameObject()
{

}
void SDLGameObject::load(const LoaderParams* pParams)
			{

				m_position.setX(pParams->getX());
				m_position.setY(pParams->getY());
				m_width = pParams->getWidth();
				m_height = pParams->getHeight();
				m_textureID = pParams->getTextureID();
				m_currentRow = 1;
				m_currentFrame = 1;

			}
void SDLGameObject::draw()
{
	if(m_velocity.getX() > 0)
	{
		TextureManager::getInstance()->drawFrame(m_textureID,(Uint32)m_position.getX(), (Uint32)m_position.getY(),	m_width, m_height, m_currentRow, m_currentFrame,TheGame::Instance()->getRenderer(),SDL_FLIP_HORIZONTAL);
	}
	else
	{
		TextureManager::getInstance()->drawFrame(m_textureID,(Uint32)m_position.getX(), (Uint32)m_position.getY(),	m_width, m_height, m_currentRow, m_currentFrame,TheGame::Instance()->getRenderer());
	}

		TextureManager::getInstance()->drawFrame(m_textureID, m_position.getX(), m_position.getY(), m_width, m_height, m_currentRow, m_currentFrame, Game::Instance()->getRenderer());
}



void SDLGameObject::update(){
	m_velocity += m_acceleration;
	m_position += m_velocity;
}

