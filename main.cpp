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
    Texture orangeShroomTexture2;
    orangeShroomTexture2.loadFromFile("../Textures/OrangeShroomsRow2.png");
    Texture orangeShroomTexture3;
    orangeShroomTexture3.loadFromFile("../Textures/OrangeShroomsRow4.png");
    Texture darkMushroom1Texture;
    darkMushroom1Texture.loadFromFile("../Textures/DarkMushroom1.png");
    Texture darkMushroom2Texture;
    darkMushroom2Texture.loadFromFile("../Textures/DarkMushroom2.png");
    Texture forestFloorTexture;
    forestFloorTexture.loadFromFile("../Textures/ForestFloor.png");
    
    StaticCharacter froggyChar(&froggyTexture, Vector2u(1, 1), 75.0, 75.0, 550.0f, 400.0f);
    AnimatedCharacter bouncyShroomChar(&bouncyShroomTexture, Vector2u(5,1), 100.0, 100.0, 100.0, 350.0, 0.2f, 150.0f);
    AnimatedCharacter orangeShroomChar(&orangeShroomTexture, Vector2u(3,1), 100.0, 150.0, 350.0, 450.0, 0.2f, 100.0f);
    AnimatedCharacter orangeShroomChar2(&orangeShroomTexture2, Vector2u(4, 1), 120.0, 150.0, 450.0, 450.0, 0.2f, 150.0f);
    AnimatedCharacter orangeShroomChar3(&orangeShroomTexture3, Vector2u(2,1), 75.0, 75.0, 200.0, 300.0, 0.2f, 150.0f);
    StaticCharacter darkMushroom1Char(&darkMushroom1Texture, Vector2u(3, 1), 75.0, 75.0, 400.0f, 250.0f);
    StaticCharacter forestFloor (&forestFloorTexture, Vector2u(1,1), 600.0, 600.0, 300.0, 300.0);
    
    
    float deltaTime = 0.0f;
    Clock clock;
    
    
    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        bouncyShroomChar.Update(deltaTime, 0);
        orangeShroomChar.Update(deltaTime, 0);
        orangeShroomChar2.Update(deltaTime, 0);
        orangeShroomChar3.Update(deltaTime, 0);
        window.clear(Color::Magenta);
        forestFloor.Draw(window);
        froggyChar.Draw(window);
        bouncyShroomChar.Draw(window);
        orangeShroomChar.Draw(window);
        orangeShroomChar2.Draw(window);
        orangeShroomChar3.Draw(window);
        darkMushroom1Char.Draw(window);
        window.display();
    }
        
}
