#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include "StaticCharacter.h"
#include "StaticCharacter.cpp"
#include "AnimatedCharacter.h"
#include "AnimatedCharacter.cpp"

using namespace std;
using namespace sf;

static const float VIEW_HEIGHT = 600;
void ResizeView(const RenderWindow& window, View& view)
{
    float aspectRatio = float(window.getSize().x/ float(window.getSize().y));
    view.setSize(VIEW_HEIGHT * aspectRatio, VIEW_HEIGHT);
}

int main() 
{
    RenderWindow window(VideoMode(600, 600), "Mushroom Grove <3", Style::Close | Style::Titlebar | Style::Resize);
    View view(Vector2f(0.0f, 0.0f), Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

    
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
    Texture darkMushroom3Texture;
    darkMushroom3Texture.loadFromFile("../Textures/DarkMushroom3.png");
    Texture darkMushroom4Texture;
    darkMushroom4Texture.loadFromFile("../Textures/DarkMushroom4.png");
    Texture darkMushroom5Texture;
    darkMushroom5Texture.loadFromFile("../Textures/DarkMushroom5.png");
    Texture blueShroomTexture;
    blueShroomTexture.loadFromFile("../Textures/BlueShroom.png");
    Texture yellowShroomTexture;
    yellowShroomTexture.loadFromFile("../Textures/YellowShroom.png");
    Texture forestFloorTexture;
    forestFloorTexture.loadFromFile("../Textures/ForestFloor.png");
       
    
    
    StaticCharacter froggyChar(&froggyTexture, Vector2u(1, 1), 75.0, 75.0, 480.0, 260.0);
    AnimatedCharacter bouncyShroomChar(&bouncyShroomTexture, Vector2u(5,1), 90.0, 100.0, 90.0, 375.0, 0.2f, 150.0f);
    AnimatedCharacter orangeShroomChar(&orangeShroomTexture, Vector2u(3,1), 135.0, 175.0, 190.0, 500.0, 0.2f, 100.0f);
    AnimatedCharacter orangeShroomChar2(&orangeShroomTexture2, Vector2u(4, 1), 110.0, 140.0, 390.0, 425.0, 0.2f, 150.0f);
    AnimatedCharacter orangeShroomChar3(&orangeShroomTexture3, Vector2u(2,1), 75.0, 75.0, 185.0, 300.0, 0.2f, 150.0f);
    AnimatedCharacter yellowShroomChar(&yellowShroomTexture, Vector2u(3,1), 100.0, 110.0, 500.0, 520.0, 0.2f, 140.0f);
    StaticCharacter darkMushroom1Char(&darkMushroom1Texture, Vector2u(1, 1), 75.0, 75.0, 350.0, 250.0);
    StaticCharacter darkMushroom1Char_2(&darkMushroom1Texture, Vector2u(1, 1), 75.0, 75.0, 400.0, 250.0);
    StaticCharacter darkMushroom1Char_3(&darkMushroom1Texture, Vector2u(1, 1), 75.0, 75.0, 430.0, 250.0);
    StaticCharacter darkMushroom2Char(&darkMushroom2Texture, Vector2u(1,1), 65.0, 80.0, 569.0, 230.0);
    StaticCharacter darkMushroom2Char_2(&darkMushroom2Texture, Vector2u(1,1), 65.0, 80.0, 320.0, 240.0);
    StaticCharacter darkMushroom2Char_3(&darkMushroom2Texture, Vector2u(1,1), 65.0, 80.0, 540.0, 250.0);
    StaticCharacter darkMushroom2Char_4(&darkMushroom2Texture, Vector2u(1,1), 65.0, 80.0, 430.0, 290.0);
    StaticCharacter darkMushroom3Char(&darkMushroom3Texture, Vector2u(1,1), 65.0, 80.0, 585.0, 295.0);
    StaticCharacter darkMushroom4Char(&darkMushroom4Texture, Vector2u(1,1), 80.0, 90.0, 503.0, 315.0);
    StaticCharacter darkMushroom4Char_2(&darkMushroom4Texture, Vector2u(1,1), 80.0, 95.0, 540.0, 325.0);
    StaticCharacter darkMushroom5Char(&darkMushroom5Texture, Vector2u(1,1), 70.0, 85.0, 65.0, 280.0);
    StaticCharacter blueShroomChar(&blueShroomTexture, Vector2u(1,1), 75.0, 85.0, 30.0, 260.0);
    StaticCharacter blueShroomChar_2(&blueShroomTexture, Vector2u(1,1), 60.0, 75.0, 95.0, 240.0);
    StaticCharacter forestFloor(&forestFloorTexture, Vector2u(1,1), VIEW_HEIGHT, VIEW_HEIGHT, VIEW_HEIGHT/2, VIEW_HEIGHT/2);
    
    
    float deltaTime = 0.0f;
    Clock clock;
    
    Font libertine;
    libertine.loadFromFile("../Textures/LinLibertine_RBIah.ttf");
    Text text;
    text.setFont(libertine);
    text.setString("a quaint community");
    text.setCharacterSize(35);
    text.setFillColor(Color::Yellow);
    text.setPosition(10, 10);;
    
    
    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        
        Event userEvent;
        while(window.pollEvent(userEvent))
        {
            switch(userEvent.type)
            {
                case Event::Closed:
                    window.close();
                    break;
                case Event::Resized:
                    ResizeView(window, view);
                    break;
            }
        }
        
        
        //update functions for animated characters
        bouncyShroomChar.Update(deltaTime, 0);
        orangeShroomChar.Update(deltaTime, 0);
        orangeShroomChar2.Update(deltaTime, 0);
        orangeShroomChar3.Update(deltaTime, 0);
        yellowShroomChar.Update(deltaTime, 0);
        
        window.clear(Color::Magenta);
        view.setCenter(forestFloor.getPosition());
        window.setView(view);
        
        //draw functions for each character
        forestFloor.Draw(window);
        blueShroomChar.Draw(window);
        blueShroomChar_2.Draw(window);
        darkMushroom5Char.Draw(window);
        bouncyShroomChar.Draw(window);
        orangeShroomChar.Draw(window);
        orangeShroomChar2.Draw(window);
        orangeShroomChar3.Draw(window);
        yellowShroomChar.Draw(window);
        darkMushroom2Char_2.Draw(window);
        darkMushroom1Char.Draw(window);
        darkMushroom1Char_2.Draw(window);
        darkMushroom1Char_3.Draw(window);
        froggyChar.Draw(window);
        darkMushroom2Char.Draw(window);
        darkMushroom2Char_3.Draw(window);
        darkMushroom2Char_4.Draw(window);
        darkMushroom3Char.Draw(window);
        darkMushroom4Char.Draw(window);
        darkMushroom4Char_2.Draw(window);
        window.draw(text);
       
        window.display();
    }
        
}
