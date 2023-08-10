#include <SFML/Graphics.hpp>

#include "Main.h"
#include "Timestep.h"

const int window_width = 1000;
const int window_height = 800;

int main()
{
    sf::RenderWindow window(sf::VideoMode(window_width, window_height), "SFML window");

    void game_loop(sf::RenderWindow & window);
    while (window.isOpen())
    {
        // Process input events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) window.close();
        }

        // Clear screen
        window.clear();

        //Update physics

        // Update the window
        window.display();
    }

    return 0;
}
