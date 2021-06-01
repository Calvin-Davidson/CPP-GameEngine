#pragma once
#include "core.h";
#include <vector>

static class Input
{
public:
	void UpdateInputs(sf::Event eventData);
	bool GetKeyCode(sf::Keyboard);
private:
	void OnKeyPress(sf::Event eventData);
	void OnKeyReleaseEvent(sf::Event eventData);
	void MouseWheelEvent(sf::Event eventData);
	void JoyStickMove(sf::Event eventData);
	void JoyStickButton(sf::Event eventData);
	void JoyStickConnect(sf::Event eventData);
	void OnTouch(sf::Event eventData);
	void OnSensorChange(sf::Event eventData);

	std::vector<sf::Keyboard> _keysPressed;
};

