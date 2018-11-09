#include <SFML/Graphics.hpp>
#include"SFML\Graphics.hpp"
#include"SFML\window.hpp"
#include"SFML\System.hpp"
#include<cstdlib>
using namespace sf;
int main()
{
    sf::RenderWindow window(sf::VideoMode(1000,700), "SFML works!");
    window.setFramerateLimit(60);
    Texture playerTex,enemytex1,backtex1;
    Sprite player,back1;

        RectangleShape enemy1;
    player.setScale(1.f,1.f);
    player.setPosition(Vector2f(500.f,50.f));

    enemy1.setSize(Vector2f(400.f,250.f));
    enemy1.setPosition(Vector2f(100.f,250.f));

       playerTex.loadFromFile("soldierSeatDownShoot.png");
  enemytex1.loadFromFile("Tau_Beast.png");
  backtex1.loadFromFile("7f7c4ef4b62f622f944831f1be6eab7e.png");

  playerTex.setRepeated(true);
     //throw "Could not load cat.png!";
     player.setTexture(playerTex);
     enemy1.setTexture(&enemytex1);
     back1.setTexture(backtex1);

    // cat.setScale(Vector2f(.3f,.3f));

    player.setTextureRect(IntRect(0,0,130,160));
    // std::vector<Sprite> cats;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if(Keyboard::isKeyPressed(Keyboard::Down))
      player.move(0,10.f);

        if(Keyboard::isKeyPressed(Keyboard::Up))
                player.move(0,-10.f);

        if(Keyboard::isKeyPressed(Keyboard::Right))
         player.move(10.f,0);

        if(Keyboard::isKeyPressed(Keyboard::Left))
       player.move(-10.f,0);



            window.clear();


      window.draw(back1);
         window.draw(player);
        window.draw(enemy1);
        window.display();
    }

    return 0;
}
