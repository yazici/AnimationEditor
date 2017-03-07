#include "PreviewWindow.h"
#include <SFML\Graphics\RenderWindow.hpp>
PreviewWindow::PreviewWindow()
{
	myWindow = new sf::RenderWindow(sf::VideoMode(800, 800), "Preview");
	
	int x = static_cast<int>(sf::VideoMode::getDesktopMode().width) - static_cast<float>(myWindow->getSize().x);
	int y = static_cast<int>(myWindow->getPosition().y);

	myWindow->setPosition({x,y});
}

void PreviewWindow::Update()
{
}

void PreviewWindow::Render()
{
	myWindow->display();

	myWindow->clear();
}
