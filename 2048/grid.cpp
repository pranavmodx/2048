#include <SFML/Graphics.hpp>
#include "grid.hpp"

void Grid::displayGrid(sf::RenderWindow *window) {
    float tileSize = 40.f;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            sf::RectangleShape rect (sf::Vector2f(tileSize, tileSize));
            rect.setPosition(i + tileSize, j + tileSize);
            window->draw(rect);
        }
    }
}

