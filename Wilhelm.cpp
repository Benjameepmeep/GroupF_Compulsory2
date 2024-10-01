#include <iostream>
#include "Wilhelm.h"
using namespace std;


class Player_Base {
private:
	int maxHealth;
	int currentHealth = maxHealth;
	int light_attack;
	int hard_attack;

public:
	void setHealth(int health) {
		maxHealth = health;
	}
	void setLAttack(int lightDamage) {
		light_attack = lightDamage;
	}
	void setHAttack(int hardDamage) {
		hard_attack = hardDamage;
	}
	void attack(int damage) {
		currentHealth -= damage;
	}
	void heal(int healing) {
		currentHealth += healing;
	}
};

