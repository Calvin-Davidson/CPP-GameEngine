#include "GameWindow.h"

GameWindow::GameWindow()
{
    std::cout << "new window";

	this->_renderWindow = new sf::RenderWindow(sf::VideoMode(900, 400), "SFML works!");
}

GameWindow::~GameWindow()
{
}

void GameWindow::Update()
{    
        sf::Event event;
        while (_renderWindow->pollEvent(event))
        {
            switch (event.type) {
                case sf::Event::Closed:
                    _renderWindow->close();
                    break;
                case sf::Event::Resized:
                    _renderWindow->setView(sf::View(sf::FloatRect(0, 0, event.size.width, event.size.height)));
                    break;
                case sf::Event::KeyPressed:
                case sf::Event::KeyReleased:
                    break;
                default:
                    break;
            }
        }

        _renderWindow->clear();
        DrawAll();
        _renderWindow->display();
    
}

sf::Event GameWindow::GetEvent()
{
    return sf::Event();
}

void GameWindow::Stop()
{
    _renderWindow->close();
}

bool GameWindow::AddDrawable(sf::Drawable* drawable)
{
    if (std::find(this->Drawables.begin(), this->Drawables.end(), drawable) != this->Drawables.end()) return false;
    this->Drawables.push_back(drawable);
    return true;
}

bool GameWindow::RemoveDrawable(sf::Drawable* drawable)
{
    if (std::find(this->Drawables.begin(), this->Drawables.end(), drawable) == this->Drawables.end()) return false;
    this->Drawables.erase(std::remove(this->Drawables.begin(), this->Drawables.end(), drawable), this->Drawables.end());
    return true;
}

void GameWindow::DrawAll()
{
    for (int i = 0; i < this->Drawables.size(); i++) {
        if (this->Drawables.at(i) == NULL) continue;
        this->_renderWindow->draw(*this->Drawables.at(i));
    }
}
