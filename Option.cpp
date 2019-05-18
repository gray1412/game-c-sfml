#include "Option.h"

#define WIDTH_BUTTON_OPTION 370
#define HIGHT_BUTTON_OPTION 105

Option::Option()
{
	textureBackgroundOption.loadFromFile("images/backgroundOption.png");
	spriteBackgroundOption.setTexture(textureBackgroundOption);

	textureButtonEasy.loadFromFile("images/ButtonEasy.png");
	spriteButtonEasy.setTexture(textureButtonEasy);
	spriteButtonEasy.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
	spriteButtonEasy.setPosition(450.0f, 150.0f);

	textureButtonNormal.loadFromFile("images/ButtonNormal.png");
	spriteButtonNormal.setTexture(textureButtonNormal);
	spriteButtonNormal.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
	spriteButtonNormal.setPosition(450.0f, 300.0f);

	textureButtonHard.loadFromFile("images/ButtonHard.png");
	spriteButtonHard.setTexture(textureButtonHard);
	spriteButtonHard.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
	spriteButtonHard.setPosition(450.0f, 450.0f);
}


Option::~Option()
{
}

void Option::drawOption(sf::RenderWindow &window)
{
	window.draw(spriteBackgroundOption);
	window.draw(spriteButtonEasy);
	window.draw(spriteButtonNormal);
	window.draw(spriteButtonHard);
}

void Option::updateOption(sf::RenderWindow &window)
{
	if (isOnButton(&spriteButtonEasy, (float)WIDTH_BUTTON_OPTION, (float)HIGHT_BUTTON_OPTION, window) && (isClicked() == true))
	{
		spriteButtonEasy.setTextureRect(sf::IntRect(WIDTH_BUTTON_OPTION, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		spriteButtonNormal.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		spriteButtonHard.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		damage = 10;
		isUpdated = true;
	}
	else if (isOnButton(&spriteButtonNormal, (float)WIDTH_BUTTON_OPTION, (float)HIGHT_BUTTON_OPTION, window) && (isClicked() == true))
	{
		spriteButtonEasy.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		spriteButtonNormal.setTextureRect(sf::IntRect(WIDTH_BUTTON_OPTION, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		spriteButtonHard.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		damage = 5;
		isUpdated = true;
	}
	else if (isOnButton(&spriteButtonHard, (float)WIDTH_BUTTON_OPTION, (float)HIGHT_BUTTON_OPTION, window) && (isClicked() == true))
	{
		spriteButtonEasy.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		spriteButtonNormal.setTextureRect(sf::IntRect(0, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		spriteButtonHard.setTextureRect(sf::IntRect(WIDTH_BUTTON_OPTION, 0, WIDTH_BUTTON_OPTION, HIGHT_BUTTON_OPTION));
		damage = 1;
		isUpdated = true;
	}
}


