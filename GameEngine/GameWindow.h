#pragma once
#include "Core.h"

class GameWindow
{
public:
	GameWindow();
	~GameWindow();

	void Update();
	sf::Event GetEvent();
	void Stop();

	bool AddDrawable(sf::Drawable* drawable);
	bool RemoveDrawable(sf::Drawable* drawable);
private:
	void DrawAll();

	sf::RenderWindow* _renderWindow;
	std::vector<sf::Drawable*> Drawables;
};

