#ifndef ROTATINGRECT_HPP
#define ROTATINGRECT_HPP

#include "GameObject.hpp"

class RotatingRect : public GameObject
{
public:
    RotatingRect();
    ~RotatingRect();
    virtual void update(sf::Time delta);
    virtual void draw(sf::RenderWindow& window);

private:
    sf::Vector2f vec;
    sf::RectangleShape rect;
    sf::Color color;
};

#endif // ROTATINGRECT_HPP
