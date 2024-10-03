#include <iostream>
#include <string>
#include "Player.h"


class Player_Base {
	private:
		int health;
		int light_attack;
		int critChance;
		int healingStat;
		int hard_attack;
		int damage;

	public:
		void setHealth(int healing) {
			health = healing;
			}

		void setHealingStat(int healing) {
			healingStat = healing;
			}

		void setLAttack(int lightDamage) {
			light_attack = lightDamage;
			}

		void setHAttack(int hardDamage) {
			hard_attack = hardDamage;
			}

		int getLAttack() {
			return light_attack;
			}

		int getHAttack() {
			return hard_attack;
			}

		int getHealth() {
			return health;
			}

		int getDamage() {
			critChance = rand() % 5 + 1;

			switch (critChance) {
			case 5:
				damage = hard_attack;
				break;

			default:
				damage = light_attack;
			}

			return damage;
		}

		void attack(int dmg) {
			health -= dmg;
		}

		void heal() {
			health += healingStat;
			}

		/*void print(std::string text) {
			std::cout << text;
			}*/

};


int main() {	

	Player_Base player;
	player.setHealth(20);
	player.setHealingStat(4);
	player.setLAttack(2);
	player.setHAttack(5);
	
	Player_Base enemy;
	enemy.setHealth(15);
	enemy.setHealingStat(3);
	enemy.setLAttack(3);
	enemy.setHAttack(7);


	enemy.attack(player.getDamage());
	player.attack(enemy.getDamage());
	enemy.attack(player.getDamage());
	enemy.heal();
	enemy.attack(player.getDamage());
	player.attack(enemy.getDamage());
	player.heal();
	player.attack(enemy.getDamage());

	std::cout << "Players health is " << player.getHealth() << "\n";
	std::cout << "Enemys health is " << enemy.getHealth() << "\n";



	return 0;
}
