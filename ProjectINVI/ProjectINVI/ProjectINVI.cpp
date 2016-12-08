// ProjectINVI.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include "ImageManager.h"

int _tmain()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");
//	sf::CircleShape shape(100.f);
//	shape.setFillColor(sf::Color::Green);

	image_manager mngr;
	//mngr.add_resource_directory("C:/Users/INVI/Documents/Project/Main project git/INVI/ProjectINVI/ProjectINVI/res/img/");

	//TODO return texture from manager
	sf::Image im1 = mngr.get_image("C:/Users/INVI/Documents/Project/Main project git/INVI/ProjectINVI/ProjectINVI/res/img/test.png");

	sf::Sprite spr1;
	sf::Texture tx1;
	tx1.loadFromImage(im1);

	spr1.setTexture(tx1);
	spr1.setPosition(sf::Vector2f(10, 50));

	float speed = 10;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type){
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				switch (event.key.code){
				case sf::Keyboard::Up:
					spr1.move(0.0f, -1.0f * speed);
					break;

				case sf::Keyboard::Down:
					spr1.move(0.0f, 1.0f * speed);
					break;

				case sf::Keyboard::Left:
					spr1.move(-1.0f * speed, 0.0f);
					break;

				case sf::Keyboard::Right:
					spr1.move(1.0f * speed, 0.0f);
					break;
				}
				break;
			}
		}

		window.clear();
		window.draw(spr1);
		window.display();
	}

	return 0;
}

