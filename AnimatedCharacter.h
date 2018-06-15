#ifndef ANIMATEDCHARACTER_H
#define ANIMATEDCHARACTER_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Animation.h"

using namespace std;
using namespace sf;


class AnimatedCharacter
{
public:

    AnimatedCharacter(Texture* texture, Vector2u imageCount, float width, float height, float xPos, float yPos, float switchTime, float speed);
    
    void Update(float deltaTime, int rowChoice);
    void Draw(RenderWindow& window);
    Vector2f getPosition()
    {
        return body.getPosition();
    }
    
private:
    RectangleShape body;
    Animation animate;
    unsigned int row;
    float speed;
    

};

#endif // ANIMATEDCHARACTER_H
