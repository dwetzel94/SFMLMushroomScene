#include "AnimatedCharacter.h"
#include "Animation.h"
#include "Animation.cpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

AnimatedCharacter::AnimatedCharacter(Texture* texture, Vector2u imageCount, float width, float height, float xPos, float yPos, float switchTime, float speed) : animate(texture, imageCount, switchTime)
{
    this->speed = speed;
    row = 0;
    
    body.setSize(Vector2f(width, height));
    body.setOrigin(body.getSize() / 2.0f);
    body.setPosition(xPos, yPos);
    body.setTexture(texture);
}

void AnimatedCharacter::Update(float deltaTime)
{
    Vector2f movement(0.0f, 0.0f);
    
    if(movement.x == 0 && movement.y == 0)
    {
        row = 0;
    }
    
    animate.Updated(row, deltaTime);
    body.setTextureRect(animate.uvRect);
    body.move(movement);
}

void AnimatedCharacter::Draw(sf::RenderWindow& window)
{
    window.draw(body);
}

