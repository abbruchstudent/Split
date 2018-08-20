#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"

class Character : public GameObject
{
public:
    Character();
    virtual void update(sf::Time delta);
    virtual void draw(sf::RenderWindow& window);

private:
    sf::RectangleShape rect;
};

#endif // CHARACTER_HPP
