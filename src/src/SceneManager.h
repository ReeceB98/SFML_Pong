#pragma once
#include <iostream>
#include <string>
#include "SFML/Graphics.hpp"

class SceneManager
{

private:

	enum game_scenes { MENU, GAMEPLAY, ENDSCREEN };

	sf::Font font;
	sf::Text menu_text;
	sf::Text gameplay_text;
	sf::Text endscreen_text;

	//void init_text(int current_text);

public:

	SceneManager();
	~SceneManager();

	void init_text(int current_text);
	void switch_scenes(int current_scene);
	void render(sf::RenderWindow& window, int current_text);
};

