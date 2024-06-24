#include "SceneManager.h"

void SceneManager::init_text(int current_text)
{
	if (!font.loadFromFile("C:/VisualStudio/SFML_Pong/src/Fonts/Pixeled.ttf")) {

		std::cout << "Error loading file\n";
	}

	switch (current_text) {

	case MENU:
		menu_text.setFont(font);
		menu_text.setString("Menu");
		menu_text.setFillColor(sf::Color::White);
		menu_text.setCharacterSize(50.0f);
		menu_text.setPosition(50.0f, 650.0f);
		break;
	case GAMEPLAY:
		gameplay_text.setFont(font);
		gameplay_text.setString("Gameplay");
		gameplay_text.setFillColor(sf::Color::White);
		gameplay_text.setCharacterSize(50.0f);
		gameplay_text.setPosition(50.0f, 650.0f);
		break;
	case ENDSCREEN:
		endscreen_text.setFont(font);
		endscreen_text.setString("Endscreen");
		endscreen_text.setFillColor(sf::Color::White);
		endscreen_text.setCharacterSize(50.0f);
		endscreen_text.setPosition(50.0f, 650.0f);
		break;
	default:
		std::cout << "Could not initialize text to window";
		break;
	}
	//menu_text.setFont(font);
	//menu_text.setString("Menu");
	//menu_text.setFillColor(sf::Color::White);
	//menu_text.setCharacterSize(50.0f);
	//menu_text.setPosition(50.0f, 650.0f);
}

SceneManager::SceneManager()
{
	//this->init_text();
}

SceneManager::~SceneManager()
{
}

void SceneManager::switch_scenes(int scene)
{
	//scene = MENU;
	int current_scene = scene;

	switch (current_scene){
	
	case MENU:
		std::cout << "Menu\n";
		break;
	case GAMEPLAY:
		std::cout << "Gameplay\n";
		break;
	case ENDSCREEN:
		std::cout << "End Screen\n";
		break;
	default:
		std::cout << "No Scene Selected";
		break;
	}
}

void SceneManager::render(sf::RenderWindow& window, int current_text)
{
	switch (current_text) {

	case MENU:
		window.draw(menu_text);
		break;
	case GAMEPLAY:
		window.draw(gameplay_text);
		break;
	case ENDSCREEN:
		window.draw(endscreen_text);
		break;
	default:
		std::cout << "Could not display text to window";
		break;
	}

}
