#include "Engine.h"
#include <cmath>

Engine::Engine()
{
	this->window = new GameWindow();

    sf::CircleShape* shape = new sf::CircleShape(25.0f);
    shape->setFillColor(sf::Color::Green);
    shape->setPosition(25, 50);
    shape->setOrigin(shape->getRadius(), shape->getRadius());
    window->AddDrawable(shape);

    float velX = 0.001;
    float velY = 0.001;
    sf::Clock deltaTime;
    while (true) {
        window->Update();

        std::cout << shape->getPosition().x << "\n";
        if (shape->getPosition().x <= shape->getRadius()) {
            velX = abs(velX);
        }

        if (shape->getPosition().x >= 900 - shape->getRadius()) {
            velX = -abs(velX);
        }


        if (shape->getPosition().y <= shape->getRadius()) {
            velY = abs(velY);
        }

        if (shape->getPosition().y >= 400 - shape->getRadius()) {
            velY = -abs(velY);
        }


        shape->setPosition(shape->getPosition().x + (velX * deltaTime.getElapsedTime().asMicroseconds()), shape->getPosition().y + (velY * deltaTime.getElapsedTime().asMicroseconds()));



        sf::Time dt = deltaTime.restart();

    }
}

Engine::~Engine()
{
}
