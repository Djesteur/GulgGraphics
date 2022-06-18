#include "GulgECS/GulgEngine.hpp"
#include "GulgECS/GulgDeclarations.hpp"

#include "SFML/Window/Window.hpp"

int main() {

	Gg::GulgEngine engine;

	Gg::Entity newEntity = engine.getNewEntity();

	sf::Window window(sf::VideoMode(800, 600), "My window");

	return 0;
}