#include "Monster.h"

void Monster::update()
{
	m_currentFrame = int(((SDL_GetTicks() / 100) % 1));
	if (g == 0)
	{
		m_x += 2;
		if (m_x == 500)
		{
			g = 1;
		}
	}
	if (g == 1)
	{
		m_x -= 2;
		if (m_x == 0)
		{
			g = 0;
		}
	}
}