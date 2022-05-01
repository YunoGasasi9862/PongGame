#include "Bat.h"


Bat::Bat(float startX, float startY)
{
	m_Position.x = startX;
	m_Position.y = startY;

	m_Shape.setSize(sf::Vector2f(50, 5));
	m_Shape.setPosition(m_Position);


	
}

FloatRect Bat::getPosition()
{

	return m_Shape.getGlobalBounds();
}