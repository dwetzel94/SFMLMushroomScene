#include "Animation.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;
using namespace sf;

Animation::Animation(Texture* texture, Vector2u imageCount, float swtichTime)
{
    this->imageCount = imageCount;
    this->switchTime = swtichTime;
    totalTime = 0.0f;
    currentImage.x = 0;
    
    uvRect.width = texture->getSize().x / float(imageCount.x);
    uvRect.height = texture->getSize().y / float(imageCount.y);    
}

void Animation::Updated(int row, float deltaTime)
{
    currentImage.y = row;
    totalTime += deltaTime;
    
    if(totalTime >= switchTime)
    {
        totalTime -= switchTime;
        currentImage.x ++;
        if(currentImage.x >= imageCount.x)
        {
            currentImage.x = 0;
        }
    }
    
    uvRect.top = currentImage.y * uvRect.height;
    uvRect.left = currentImage.x * uvRect.width;
    uvRect.width = abs(uvRect.width);
}


