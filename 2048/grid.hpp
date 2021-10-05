#include <SFML/Graphics.hpp>
#include <vector>

#include "tile.hpp"

class Grid {
    std::vector<std::vector<Tile*>> tiles;
    
public:
    Grid() : tiles(4, std::vector<Tile*> (4, nullptr)) {};
    
    void fillRandomTile(sf::RenderWindow *window);
    void displayGrid(sf::RenderWindow *window);
};
