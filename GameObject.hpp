#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <SFML/Graphics.hpp>

class GameObject
{
public:
    GameObject(){}
    virtual ~GameObject(){}

    virtual void update(sf::Time delta){}
    virtual void draw(sf::RenderWindow& window){}
};

#endif // GAMEOBJECT_HPP
