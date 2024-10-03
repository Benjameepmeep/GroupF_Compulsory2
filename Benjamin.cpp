#pragma once

#include <iostream>
#include "Wilhelm.h"
#include "GroupF_Compulsory2.h"

void start() {

}

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
		// Print what has happened (e.g. "PLayer took 3 damage from Enemy)
	}
};

class Enemy: public Player_Base
{

};