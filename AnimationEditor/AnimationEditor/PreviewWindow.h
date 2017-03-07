#pragma once

namespace sf
{
	class RenderWindow;
}

class PreviewWindow
{
public:
	PreviewWindow();
	void Update();
	void Render();
private:
	sf::RenderWindow* myWindow;
};