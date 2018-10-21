#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>

#include "Block.hpp"

class Room
{
public:
    Room();

    void draw(sf::RenderWindow& window)const;
private:
    std::vector<Block> blocks;
};

#endif // ROOM_HPP
