#include "Game.h"

int current_scene = 0;

void Game::init_window()
{
	this->window = new sf::RenderWindow(sf::VideoMode(1280, 720), "SFML works!");
}

Game::Game()
{
    this->init_window();
    MenuText.init_text(current_scene);
    //shape = new sf::CircleShape();
    //shape->setRadius(100.0f);
    //shape->setFillColor(sf::Color::Green);
}

Game::~Game()
{
	delete this->window;
    //delete shape;
}

void Game::update_events()
{
    while (this->window->pollEvent(this->event))
    {
        if (this->event.type == sf::Event::Closed)
            this->window->close();
    }
}

void Game::update()
{
    this->update_events();
}

void Game::render()
{
    //int current_scene = 3;
    this->window->clear();

    // Render items here
    //this->window->draw(*shape);
    switch (current_scene) {

    case MENU:
        std::cout << "Menu\n";
        MenuText.render(*window, current_scene);
        break;
    case GAMEPLAY:
        std::cout << "Gameplay\n";
        MenuText.render(*window, current_scene);
        break;
    case ENDSCREEN:
        std::cout << "Endscreen\n";
        MenuText.render(*window, current_scene);
        break;
    default:
        std::cout << "No Scene Selected\n";
        break;
    }
    //SceneManager.render(*window);
    this->window->display();
}

void Game::run()
{
    while (this->window->isOpen())
    {
        this->update();
        this->render();
    }
}
