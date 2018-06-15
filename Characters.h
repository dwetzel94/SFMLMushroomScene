#ifndef CHARACTERS_H
#define CHARACTERS_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

class Characters
{
public:
    
    Characters(Texture* texture, Vector2u imageCount, float height, float width, float xPos, float yPos);


    ~Characters();
    
    void Draw(RenderWindow& window);
    
private:
    RectangleShape body;
    unsigned int row;

};

#endif // CHARACTERS_H
