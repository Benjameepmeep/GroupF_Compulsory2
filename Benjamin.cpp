#include <iostream>
#include <string>
#include "Player.h"

class Player_Base 
{
private:
	int maxHealth;
	int currentHealth = maxHealth;
	int light_attack;
	int hard_attack;

public:
	void setHealth(int health) 
	{
		maxHealth = health;
	}
	void setLAttack(int lightDamage) 
	{
		light_attack = lightDamage;
	}
	void setHAttack(int hardDamage) 
	{
		hard_attack = hardDamage;
	}
	void attack(int damage) 
	{
		currentHealth -= damage;
	}
	void heal(int healing) 
	{
		currentHealth += healing;
	}

	// TODO: Create a string function that can print out different kinds of information. : )

	void print()
	{
		std::cout << "Aha! I, the machine am writing to you, the silly programmer!" << std::endl;
	}
};

class Enemy: public Player_Base
{

};