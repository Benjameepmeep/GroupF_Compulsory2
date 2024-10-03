#include <iostream>
#include <string>
#include "Player.h"

class Player_Base
{
private:
	int health;
	int light_attack;
	int critChance;
	int healingStat;
	int hard_attack;
	int damage;

public:
	void setHealth(int healing)
	{
		health = healing;
	}

	void setHealingStat(int healing)
	{
		healingStat = healing;
	}

	void setLAttack(int lightDamage)
	{
		light_attack = lightDamage;
	}

	void setHAttack(int hardDamage)
	{
		hard_attack = hardDamage;
	}

	int getLAttack()
	{
		return light_attack;
	}

	int getHAttack()
	{
		return hard_attack;
	}

	int getHealth()
	{
		return health;
	}

	int getHealingstat()
	{
		return healingStat;
	}

	int getDamage()
	{
		int critChance = rand() % 5 + 1;
		int damage;

		switch (critChance)
		{
		case 5:
			damage = hard_attack;
			break;

		default:
			damage = light_attack;
		}
		return damage;
	}

	/*void attack(int dmg)
	{
		health -= dmg;
	}

	void heal()
	{
		health += healingStat;
	}*/

	/*void print(std::string text)
	{
		std::cout << text;
	}*/

};

void startGame(int playerHealth, int playerDamage, int playerHealing, int enemyHealth, int enemyDamage, int enemyHealing)
{

	bool startOver = true;
	while (startOver = true)
	{
		while (playerHealth > 0 and enemyHealth > 0)
		{
			int action1 = rand() % 2 + 1;
			switch (action1)
			{
			case 1:
				enemyHealth -= playerDamage;
				std::cout << "Players health: " << playerHealth << "\n";
				std::cout << "Enemys health: " << enemyHealth << "\n";
				break;
			case 2:
				playerHealth += playerHealing;
				std::cout << "Players health: " << playerHealth << "\n";
				std::cout << "Enemys health: " << enemyHealth << "\n";
				break;
			}

			if (enemyHealth <= 0)
			{
				std::cout << "You won! \n";
				break;
				//startOver = false;
			}

			// TODO: fix 

			int action2 = rand() % 2 + 1;
			switch (action2)
			{
			case 1:
				playerHealth -= enemyDamage;
				std::cout << "Players health: " << playerHealth << "\n";
				std::cout << "Enemys health: " << enemyHealth << "\n";
				break;
			case 2:
				enemyHealth += enemyHealing;
				std::cout << "Players health: " << playerHealth << "\n";
				std::cout << "Enemys health: " << enemyHealth << "\n";
				break;
			}

			if (playerHealth <= 0) {
				std::cout << "You lost! \n";
				//startOver = false;
				break;
			}
		}
	}
}

int main() 
{	
	//Start();
	Player_Base player;
	player.setHealth(20);
	player.setHealingStat(2);
	player.setLAttack(2);
	player.setHAttack(5);
	
	Player_Base enemy;
	enemy.setHealth(15);
	enemy.setHealingStat(1);
	enemy.setLAttack(3);
	enemy.setHAttack(7);

	startGame(player.getHealth(), player.getDamage(), player.getHealingstat(), enemy.getHealth(), enemy.getDamage(), enemy.getHealingstat());
	return 0;
}