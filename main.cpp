#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "StaticCharacter.h"
#include "StaticCharacter.cpp"
#include "AnimatedCharacter.h"
#include "AnimatedCharacter.cpp"

using namespace std;
using namespace sf;


int main() 
{
    RenderWindow window(VideoMode(600, 600), "Test Window", Style::Close | Style::Titlebar | Style::Resize);

    
    Texture froggyTexture;
    froggyTexture.loadFromFile("../Textures/froggy.png");
    Texture bouncyShroomTexture;
    bouncyShroomTexture.loadFromFile("../Textures/BouncyShrooms.png");
    Texture orangeShroomTexture;
    orangeShroomTexture.loadFromFile("../Textures/OrangeShroomsRow1.png");
    Texture stonyGrassTexture;
    stonyGrassTexture.loadFromFile("../Textures/stonygrass.jpg");
    
    StaticCharacter froggyChar(&froggyTexture, Vector2u(1, 1), 75.0, 75.0, 500.0f, 300.0f);
    AnimatedCharacter bouncyShroomChar(&bouncyShroomTexture, Vector2u(5,1), 100.0, 100.0, 100.0, 300.0, 0.2f, 150.0f);
    AnimatedCharacter orangeShroomChar(&orangeShroomTexture, Vector2u(3,1), 100.0, 150.0, 250.0, 375.0, 0.2f, 100.0f);
    StaticCharacter stonyGrassGround (&stonyGrassTexture, Vector2u(1,1), 600.0, 300.0, 300.0, 500.0);
    
    
    float deltaTime = 0.0f;
    Clock clock;
    
    
    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        bouncyShroomChar.Update(deltaTime, 0);
        orangeShroomChar.Update(deltaTime, 0);
        window.clear(Color::Magenta);
        stonyGrassGround.Draw(window);
        froggyChar.Draw(window);
        bouncyShroomChar.Draw(window);
        orangeShroomChar.Draw(window);
        window.display();
    }
        
}
