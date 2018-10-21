#include "Character.hpp"

Character::Character()
    : rect(sf::Vector2f(16, 16))
{
    rect.setFillColor(sf::Color::Green);
}

void Character::update(sf::Time delta)
{
    auto x = rect.getPosition().x;
    auto y = rect.getPosition().y;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        x -= 1000 * delta.asSeconds();
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        x += 1000 * delta.asSeconds();
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        y -= 1000 * delta.asSeconds();
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        y += 1000 * delta.asSeconds();
    }

    sf::Vector2f nextPosition(x,y);
    rect.setPosition(nextPosition);
}

void Character::draw(sf::RenderWindow& window)
{
    window.draw(rect);
}
