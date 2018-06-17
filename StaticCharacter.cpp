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

// void StaticCharacter::Tile(Texture* texture, float width, float height, float spanWidth, float spanHeight, float xPos, float yPos, RenderWindow& window)
// {
//     float widthRepeat = spanWidth / width;
//     float heightRepeat = spanHeight / height;
//     
//     if(isTiled == true)
//     {
//         for(int i = xPos; i < widthRepeat; i++)
//         {
//             for(int j = yPos; j < heightRepeat; j++)
//             {
//                 body.setSize(Vector2f(width, height));
//                 body.setOrigin(body.getSize()/2.0f);
//                 body.setPosition(xPos, yPos);
//                 body.setTexture(texture);
//                 window.draw(body);
//             }
//         }
//     }
// }


void StaticCharacter::Draw(RenderWindow& window)
{
    window.draw(body);
}
