#ifndef ANIMATION_H
#define ANIMATION_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class Animation
{
public:
    
    Animation(Texture* texture, Vector2u imageCount, float swtichTime);
    
    void Updated(int row, float deltaTime);
    IntRect uvRect;
    
private:
    Vector2u imageCount;
    Vector2u currentImage;
    float totalTime;
    float switchTime;

};

#endif // ANIMATION_H
