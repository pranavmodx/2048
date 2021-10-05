#include <SFML/Graphics.hpp>
#include "grid.hpp"

class Game {
    sf::RenderWindow *window;
    sf::VideoMode videoMode;
    sf::Event event;
    
    Grid grid;
    
    void initVariables();
    void initWindow();
   
public:
    Game();
    ~Game();
    
    bool isRunning();
    void pollEvents();
    void update();
    void render();
};
