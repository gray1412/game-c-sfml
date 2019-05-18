#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "GameInputs.h"

class Option
{
public:
	Option();
	virtual ~Option();
	void updateOption(sf::RenderWindow &window);
	void drawOption(sf::RenderWindow &window);
	int damage;
	bool isUpdated = false;

private:

	sf::Sprite spriteBackgroundOption;
	sf::Texture textureBackgroundOption;

	sf::Sprite spriteButtonEasy;
	sf::Texture textureButtonEasy;

	sf::Sprite spriteButtonNormal;
	sf::Texture textureButtonNormal;

	sf::Sprite spriteButtonHard;
	sf::Texture textureButtonHard;
};

