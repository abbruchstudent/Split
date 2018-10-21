cmake_minimum_required(VERSION 3.2)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

project(Split)
add_executable(main
    "main.cpp"
    "GameObject.hpp"
    "RotatingRect.cpp"
    "Character.cpp"
    "Room.cpp"
    "Block.cpp"
    "CollisionHandling.cpp"
    "TextureManager.cpp")

target_link_libraries(main sfml-graphics)
