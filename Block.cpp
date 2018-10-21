#include "Block.hpp"

Block::Block(sf::Vector2f position)
    : sprite(TextureManager::getTexture("stone"))
{
    sprite.setPosition(position);
}

void Block::draw(sf::RenderWindow& window)const
{
    window.draw(sprite);
}
