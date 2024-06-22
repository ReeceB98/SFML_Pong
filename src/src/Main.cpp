// src.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//#include "SFML/Graphics.hpp"
//#include "SceneManager.h"
#include "Game.h"

int main()
{
    //sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);

    

    //SceneManager SceneManager;

    //SceneManager.switch_scenes(3);

    Game Game;

    Game.run();
    return 0;
}


