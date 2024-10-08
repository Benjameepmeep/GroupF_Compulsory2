#include <iostream>
#include <string>
#include "Player.h"

#pragma region PlayerBase

class Player_Base 
{
public:
	// unsigned means the int has to be positive (+). signed int means the int can be either negative or positive (-/+).
	// short int or just short means the int has a lesser range (-32,768 to 32 767, instead of -2 trillion to 2 trillion)

	std::string name = "";
	unsigned short maxHealth = 1;
	unsigned short int currentHealth = maxHealth;
	unsigned short light_attack = 1;
	unsigned short int hard_attack = 1;

	void SetHealth(int health)
	{
		maxHealth = health;
	}
	void UpdateHealth(int number)
	{
		currentHealth += number;
	}
	void SetLightAttack(int lightDamage) 
	{
		light_attack = lightDamage;
	}

	void Speak();

	void SetHeavyAttack(int hardDamage) 
	{
		hard_attack = hardDamage;
	}
	void AttackOpponent(int damage) 
	{
		currentHealth -= damage;
	}
	void Heal(int healing) 
	{
		currentHealth += healing;
	}

	// TODO: Create a string function that can print out different kinds of information. : )
	// Try use \n to create a new line char, or \t as a tab.
	// std::cin to receive user input. : )
};

void Player_Base::Speak()
{
	std::cout << "Hi. I'm here, the " << name << ".\n" << "My current health is: " << currentHealth << ".\n";
}

#pragma endregion

#pragma region Testing Player Input

// Below function is mostly for testing purposes and receiving input. Works well!

void receivePlayerInput()
{
	Player_Base playerBase;
	playerBase.UpdateHealth(3);
	std::string greeting = "OwO, a string?";
	std::cout << greeting << std::endl;

	std::cout << "Add health to player: " << std::endl;
	short int x;
	std::cin >> x;
		while (!std::cin)
		{
			if (!std::cin)
			{
				// user didn't input a number
				std::cin.clear(); // reset failbit
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
				std::cout << "That's not a number! Try again." << std::endl;
				std::cin >> x;
			}
			else break;
		}

	std::cout << "Current Health: " << playerBase.currentHealth << "\n Health Added: " << x << std::endl;
	playerBase.UpdateHealth(x);
	std::cout << "New Health Total:" << playerBase.currentHealth << std::endl;
}

#pragma endregion

#pragma region Enemy and Boss (Inheritance)

class Enemy
{
public:
	Enemy(int damage = 10);

	void virtual Taunt() const;
	void virtual Attack() const;

private:
	int damageValue;
};

Enemy::Enemy(int damage):
damageValue(damage) 
{}

void Enemy::Taunt() const
{
	std::cout << "The enemy wants to fite u \n";
}

void Enemy::Attack() const
{
	std::cout << " --- Attack! --- \nInflicts " << damageValue << " damage points.";
}

class Boss : public Enemy
{
public:
	Boss(int damage = 30);
	void virtual Taunt() const;
	void virtual Attack() const;
};

Boss::Boss(int damage):
	Enemy(damage){}

void Boss::Taunt() const
{
	std::cout << "Big Boss finds your existence pitiful. \n";
}

void Boss::Attack() const
{
	Enemy::Attack();
	std::cout << " 'Wow, you stink' \n";
}

#pragma endregion

void start()
{
#pragma region Enemy and Boss

	/* std::cout << "Enemy object:\n";
	Enemy anEnemy;
	anEnemy.Taunt();
	anEnemy.Attack();

	std::cout << "\n\n Boss object:\n";
	Boss aBoss;
	aBoss.Taunt();
	aBoss.Attack(); */

#pragma endregion

#pragma region PlayerBase
	/* Player_Base player;
	Player_Base enemy;

	player.name = "Player";
	player.currentHealth = 9;
	// std::cout << "Player's health is: " << player.name << ".\n" << "and current health is: " << player.currentHealth << ".\n";

	enemy.name = "Enemy";
	enemy.currentHealth = 6;
	// std::cout << "Enemy's name is: " << enemy.name << ".\n" << "and current health is: " << enemy.currentHealth << ".\n\n";

	player.Speak();
	enemy.Speak(); */

#pragma endregion

#pragma region Testing Player Input

	receivePlayerInput();

#pragma endregion
}