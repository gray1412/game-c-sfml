#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <iostream>
#include "Bullet.h"
#include "Option.h"

#define MAX_TEXTURE 11
#define ANIMATION_WIDTH 350
#define ANIMATION_HEIGHT 250

class BossEnemy
{
public:
	BossEnemy(std::vector<Bullet>* bulletsList, unsigned int* bulletCount, Option* option);
	virtual ~BossEnemy();
	void updateBoss();
	void drawBoss(sf::RenderWindow &window);

	unsigned int HP = 350;
	Option* optionToSetDamage;

	sf::FloatRect BossEnemyBound();

	bool isKilled = false;

private:
	unsigned int currentPosition = 0;
	float speed = 1.0f;
	bool isRight = false;

	bool isCollided(sf::FloatRect a, sf::FloatRect b);

	std::vector<Bullet>* BulletsList = nullptr;
	unsigned int* p_BulletCount = nullptr;

	bool isEndAnimation = false;
	sf::Clock AnimClock;
	const sf::Time AnimDelay = sf::milliseconds(200); // Animation delay

	sf::Texture textureBoss;
	sf::Sprite spriteBoss;

	sf::Texture textureHP;
	sf::Sprite spriteHP;
};

