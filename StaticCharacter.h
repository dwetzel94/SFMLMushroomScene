#ifndef StaticCharacter_H
#define StaticCharacter_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>



using namespace std;
using namespace sf;

class StaticCharacter
{
public:
    
    StaticCharacter(Texture* texture, Vector2u imageCount, float width, float height, float xPos, float yPos);
    bool isTiled;
    
    void Update(float deltaTime);
    //void Tile(Texture* texture, width, float height, float spanWidth, float spanHeight, float xPos, float yPos, RenderWindow& window);
    Vector2f getPosition()
    {
        return body.getPosition();
    }
    void Draw(RenderWindow& window);
    
    
private:
    RectangleShape body;

};

#endif // StaticCharacter_H
