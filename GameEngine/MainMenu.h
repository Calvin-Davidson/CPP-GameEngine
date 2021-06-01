#pragma once
class MainMenu
{
public:
	enum class Events {
		WindowUpdate,
	};
	MainMenu(bool enabled = false);
	~MainMenu();

	void Draw();
	bool IsEnabled();
	void SetEnabled(bool value);
private:
	bool _enabled;
};

