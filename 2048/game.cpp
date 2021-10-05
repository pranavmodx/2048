#include "game.hpp"

Game::Game() {
    this->initVariables();
    this->initWindow();
}

Game::~Game() {
    delete window;
}

void Game::initVariables() {
    this->window = nullptr;
}

void Game::initWindow() {
    this->videoMode.height = 400;
    this->videoMode.width = 400;
    this->window = new sf::RenderWindow (this->videoMode, "2048");
}

bool Game::isRunning() {
    return this->window->isOpen();
}

void Game::pollEvents() {
    while(this->window->pollEvent(this->event)) {
        switch (event.type) {
            case sf::Event::Closed:
                this->window->close();
                break;
                
            case sf::Event::KeyPressed:
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                    // move to left and perform merging of tiles
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                    
                }
                else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                    
                }
                else if ( sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                    
                }
                
            default:
                break;
        }
    }
}

void Game::update() {
    this->pollEvents();
}

void Game::render() {
    this->window->clear();
    
    this->grid.displayGrid(window);
    
    this->window->display();
}
