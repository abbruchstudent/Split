#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <SFML/Graphics.hpp>
#include <iostream>

#include "TextureManager.hpp"

class Block
{
public:
    Block(sf::Vector2f position);

    void draw(sf::RenderWindow& window)const;
private:
    sf::Sprite sprite;
};

#endif // BLOCK_HPP
