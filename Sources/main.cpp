#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>

class StartUp
{
  private:


};

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Continuous Online");

	sf::Font oldEngFont;
	oldEngFont.loadFromFile("../Font/OLD_ENGL.ttf");

	sf::Text oldEngText("Le England pro", oldEngFont);
	oldEngText.setCharacterSize(24);
	oldEngText.setStyle(sf::Text::Bold);
	oldEngText.setColor(sf::Color::Green);


    sf::CircleShape shape(300.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(oldEngText);
        window.display();
    }

    return 0;
}
