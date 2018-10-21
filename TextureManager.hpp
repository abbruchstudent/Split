#ifndef TEXTUREMANAGER_HPP
#define TEXTUREMANAGER_HPP

#include <map>
#include <string>

#include <SFML/Graphics.hpp>

class TextureManager
{
public:
    static const sf::Texture& getTexture(const std::string& name);

private:
    TextureManager();
    static std::map<std::string, sf::Texture> setUp();

    static std::map<std::string, sf::Texture> textures;
};

#endif // TEXTUREMANAGER_HPP
