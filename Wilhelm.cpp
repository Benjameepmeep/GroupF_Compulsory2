#include <iostream>
#include <string>
#include "Player.h"
using namespace std;


class Player_Base {
private:
	int maxHealth = 0;
	int currentHealth = maxHealth;
	int light_attack = 0;
	int hard_attack = 0;

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
	void print(string text) {
		cout << "string";
	}
};

void main() {
	Player_Base player;
	player.setHealth(20);
	player.setLAttack(2);
	player.setHAttack(5);

}
