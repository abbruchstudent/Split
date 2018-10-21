#include <SFML/Graphics.hpp>

#include <iostream>

#include "GameObject.hpp"
#include "RotatingRect.hpp"
#include "Character.hpp"
#include "Room.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(400,400), "Test");
    window.setFramerateLimit(60);

    Character character;
    Room room;

    sf::Clock clock;
    sf::Time delta;

    while(window.isOpen())
    {
        delta = clock.restart();

        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        character.update(delta);

        window.clear(sf::Color(160, 160, 255));
        room.draw(window);
        character.draw(window);
        window.display();
    }

    return 0;
}
