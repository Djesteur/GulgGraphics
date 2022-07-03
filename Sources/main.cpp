#include "GulgECS/GulgEngine.hpp"
#include "GulgECS/GulgDeclarations.hpp"

#include <SFML/Graphics.hpp>

int main() {

	Gg::GulgEngine engine;

	Gg::Entity newEntity = engine.getNewEntity();

	sf::Window window(sf::VideoMode(800, 600), "My window");

	  while (window.isOpen())
    {
        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        sf::Event event;
        while (window.pollEvent(event))
        {
            // évènement "fermeture demandée" : on ferme la fenêtre
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }


	return 0;
}