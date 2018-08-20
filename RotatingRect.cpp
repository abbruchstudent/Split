#include "RotatingRect.hpp"

RotatingRect::RotatingRect()
    : vec(100, 100)
    , rect(vec)
    , color(sf::Color::Cyan)
{
    rect.setOrigin(rect.getSize().x/2, rect.getSize().y/2);
    rect.setPosition(200, 200);
}

RotatingRect::~RotatingRect()
{

}

void RotatingRect::update(sf::Time delta)
{
    rect.rotate(360 * delta.asSeconds());
}

void RotatingRect::draw(sf::RenderWindow& window)
{
    window.draw(rect);
}
