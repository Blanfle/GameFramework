#include "Player.h"
#include <iostream>

void Player::load(int x, int y, int width, int height,
	std::string textureID) {}

void Player::draw(SDL_Renderer* pRenderer) {}

void Player::update()
{
	m_x -= 1;
}
