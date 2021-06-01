#include "Input.h"
#include <iostream>

void Input::UpdateInputs(sf::Event eventData)
{
	switch (eventData.type) {
	case sf::Event::KeyPressed:
		Input().OnKeyPress(eventData);
		break;
	case sf::Event::KeyReleased:
		Input().OnKeyReleaseEvent(eventData);
		break;
	}
}

bool Input::GetKeyCode(sf::Keyboard keyboard)
{
	if (std::find(this->_keysPressed.begin(), this->_keysPressed.end(), keyboard) != this->_keysPressed.end()) return false;
}

void Input::OnKeyPress(sf::Event eventData)
{
	
}

void Input::OnKeyReleaseEvent(sf::Event eventData)
{
}

void Input::MouseWheelEvent(sf::Event eventData)
{
}

void Input::JoyStickMove(sf::Event eventData)
{
}

void Input::JoyStickButton(sf::Event eventData)
{
}

void Input::JoyStickConnect(sf::Event eventData)
{
}

void Input::OnTouch(sf::Event eventData)
{
}

void Input::OnSensorChange(sf::Event eventData)
{
}
