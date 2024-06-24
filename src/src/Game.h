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

	SceneManager MenuText;

	void init_window();

	enum game_scenes { MENU, GAMEPLAY, ENDSCREEN };

public:

	Game();
	~Game();

	void update_events();
	void update();
	void render();
	void run();
};

