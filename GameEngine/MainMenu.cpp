#include "MainMenu.h"

MainMenu::MainMenu(bool enabled)
{
	this->_enabled = enabled;
}

MainMenu::~MainMenu()
{
}

void MainMenu::Draw()
{
}

bool MainMenu::IsEnabled()
{
	return this->_enabled;
}

void MainMenu::SetEnabled(bool value)
{
	this->_enabled = value;
}
