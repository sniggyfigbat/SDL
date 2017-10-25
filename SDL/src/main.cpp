#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;


void init() {

}

void draw(sf::RenderWindow &window) {

}

int main()
{
	// Create a window with the constructor
	sf::RenderWindow window(sf::VideoMode(800, 600), "Shape Design Lab");

	init();

	// Run until the user closes the window
	while (window.isOpen())
	{
		// check all user events
		sf::Event event;
		while (window.pollEvent(event))
		{
			// User has pressed the close button
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		

		// Clear the window
		window.clear(sf::Color::White);

		draw(window);

		// Display what ever has been drawn to the screen
		window.display();
	}

	return 0;
}

