#ifndef StaticCharacter_H
#define StaticCharacter_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>



using namespace std;
using namespace sf;

class StaticCharacter
{
public:
    
    StaticCharacter(Texture* texture, Vector2u imageCount, float height, float width, float xPos, float yPos);
    
    void Update(float deltaTime);
    void Draw(RenderWindow& window);
    
    
private:
    RectangleShape body;

};

#endif // StaticCharacter_H
