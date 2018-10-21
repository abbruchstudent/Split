#ifndef COLLISIONHANDLING_HPP
#define COLLISIONHANDLING_HPP

#include "Character.hpp"
#include "Block.hpp"

class CollisionHandling
{
public:
    static void handle(Character& character, Block& block);

private:
    CollisionHandling();
};

#endif // COLLISIONHANDLING_HPP
