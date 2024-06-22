#include "Game.h"

void Game::init_window()
{
	this->window = new sf::RenderWindow(sf::VideoMode(200, 200), "SFML works!");
}

Game::Game()
{
    this->init_window();

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
    this->window->clear();

    // Render items here
    //this->window->draw(*shape);

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
