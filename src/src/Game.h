#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SceneManager.h"

class Game
{
private:

	sf::RenderWindow *window;
	//sf::CircleShape *shape;
	sf::Event event;

	void init_window();

public:

	Game();
	~Game();

	void update_events();
	void update();
	void render();
	void run();
};

