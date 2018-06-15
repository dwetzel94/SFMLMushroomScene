#include "StaticCharacter.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>



using namespace std;
using namespace sf;

StaticCharacter::StaticCharacter(Texture* texture, Vector2u imageCount, float width, float height, float xPos, float yPos)
{
    
    
    body.setSize(Vector2f(width, height));
    body.setOrigin(body.getSize()/2.0f);
    body.setPosition(xPos, yPos);
    body.setTexture(texture);
}


void StaticCharacter::Draw(sf::RenderWindow& window)
{
    window.draw(body);
}
