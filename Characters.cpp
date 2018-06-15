#include "Characters.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

Characters::Characters(Texture* texture, Vector2u imageCount, float width, float height, float xPos, float yPos)
{
    body.setSize(Vector2f(width, height));
    body.setOrigin(body.getSize()/2.0f);
    body.setPosition(xPos, yPos);
    body.setTexture(texture);
}

Characters::~Characters()
{

}

void Characters::Draw(sf::RenderWindow& window)
{
    window.draw(body);
}
