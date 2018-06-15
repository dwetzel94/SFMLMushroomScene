#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "StaticCharacter.h"
#include "StaticCharacter.cpp"
#include "AnimatedCharacter.h"
#include "AnimatedCharacter.cpp"

using namespace std;
using namespace sf;

// static const float VIEW_HEIGHT = 600.0f;
// void ResizeView(const RenderWindow& window, View& view)
// {
//     float aspectRatio = float((window.getSize().x) / float(window.getSize().y));
//     view.getSize();
// }

int main() 
{
    RenderWindow window(VideoMode(600, 600), "Test Window", Style::Close | Style::Titlebar | Style::Resize);
    //View view(Vector2f(0.0f, 0.0f), Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));
    
    Texture froggyTexture;
    froggyTexture.loadFromFile("../Textures/froggy.png");
    Texture bouncyShroomTexture;
    bouncyShroomTexture.loadFromFile("../Textures/BouncyShrooms.png");
    //Texture orangeShroomTexture;
    //orangeShroomTexture.loadFromFile("../Textures/OrangeShrooms,png");
    
    StaticCharacter froggyChar(&froggyTexture, Vector2u(1, 1), 100.0, 100.0, 500.0f, 300.0f);
    AnimatedCharacter bouncyShroomChar(&bouncyShroomTexture, Vector2u(5,1), 100.0, 100.0, 100.0, 300.0, 0.2f, 150.0f);
    
    float deltaTime = 0.0f;
    Clock clock;
    
    
    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        bouncyShroomChar.Update(deltaTime);
        window.clear(Color::Red);
        froggyChar.Draw(window);
        bouncyShroomChar.Draw(window);
        window.display();
    }
        
}
