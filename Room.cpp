#include "Room.hpp"

Room::Room()
{
    blocks.push_back(Block(sf::Vector2f(268,318)));
    blocks.push_back(Block(sf::Vector2f(236,318)));
    blocks.push_back(Block(sf::Vector2f(268,350)));
    blocks.push_back(Block(sf::Vector2f(236,350)));
    blocks.push_back(Block(sf::Vector2f(204,350)));
    blocks.push_back(Block(sf::Vector2f(172,350)));
    blocks.push_back(Block(sf::Vector2f(140,350)));
    blocks.push_back(Block(sf::Vector2f(108,350)));
}

void Room::draw(sf::RenderWindow& window)const
{
    for(auto it = blocks.cbegin(); it != blocks.cend(); ++it)
    {
        it->draw(window);
    }
}
