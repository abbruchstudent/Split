#include "TextureManager.hpp"

TextureManager::TextureManager()
{

}

std::map<std::string, sf::Texture> TextureManager::setUp()
{
    std::map<std::string, sf::Texture> textures;

    std::string filePath = "/home/timotheus/Workspace/Split/assets/Grotto-escape-2-files/PNG/environment-tiles.png";
    sf::IntRect rect(256, 64, 32, 32);
    sf::Texture stone;

    stone.loadFromFile(filePath,rect);

    textures.insert(std::pair<std::string, sf::Texture>("stone", stone));

    return textures;
}

std::map<std::string, sf::Texture> TextureManager::textures = TextureManager::setUp();

const sf::Texture& TextureManager::getTexture(const std::string& name)
{
    return textures.at(name);
}
