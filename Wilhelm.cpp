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
		int damage = 0;

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

};

//TODO:
//improving the while loop

bool playAgain()
{
	bool restartW = true;
	char x;
	std::cout << "Do you want to play again (y/n)? ";
	std::cin >> x;

	switch (x)
	{
	case 'y':
		restartW = true;
		break;
	case 'n':
		restartW = false;
		break;
	default:
		std::cout << "You need to input 'y' if you want to play again or 'n' if you don't " << std::endl;
		playAgain();
	}
	return restartW;
}

void startGameWilhelm()
{
	int wins = 0;
	int losses = 0;

	bool startOver = true;
	while (startOver == true)
	{
		Player_Base player;
		player.setHealth(10);
		player.setHealingStat(2);
		player.setLAttack(2);
		player.setHAttack(3);

		Player_Base enemy;
		enemy.setHealth(10);
		enemy.setHealingStat(3);
		enemy.setLAttack(1);
		enemy.setHAttack(6);


		while (player.getHealth() > 0 and enemy.getHealth() > 0)
		{
			int action1 = rand() % 5 + 1;
			switch (action1)
			{
			case 1:
				player.setHealth(player.getHealth() + player.getHealingstat());
				std::cout << "You healed yourself, and healed " << player.getHealingstat() << "\n";
				std::cout << "Your health: " << player.getHealth() << "\n";
				std::cout << "Enemy's health: " << enemy.getHealth() << "\n";
				break;
			default:
				int playerDamage = player.getDamage();
				enemy.setHealth(enemy.getHealth() - playerDamage);
				std::cout << "You attacked the enemy, and did " << playerDamage << " damage\n";
				std::cout << "Your health: " << player.getHealth() << "\n";
				std::cout << "Enemy's health: " << enemy.getHealth() << "\n";
				break;
			}

			if (enemy.getHealth() <= 0)
			{
				std::cout << "You won! \n";
				wins++;
				bool gameRestart = playAgain();
				if (gameRestart == true) {
					startOver = true;
				}
				else if (gameRestart == false) {
					startOver = false;
				}
			}

			if (enemy.getHealth() > 0)
			{

				int action2 = rand() % 5 + 1;
				switch (action2)
				{
				case 1:
					enemy.setHealth(enemy.getHealth() + enemy.getHealingstat());
					std::cout << "The enemy healed themself, and healed " << enemy.getHealingstat() << "\n";
					std::cout << "Players health: " << player.getHealth() << "\n";
					std::cout << "Enemys health: " << enemy.getHealth() << "\n";
					break;
				default:
					int enemyDamage = enemy.getDamage();
					player.setHealth(player.getHealth() - enemyDamage);
					std::cout << "The enemy attacked you, and did " << enemyDamage << " damage\n";
					std::cout << "Players health: " << player.getHealth() << "\n";
					std::cout << "Enemys health: " << enemy.getHealth() << "\n";
					break;
				}

				if (player.getHealth() <= 0)
				{
					std::cout << "You lost! \n";
					losses++;
					bool gameRestart = playAgain();
					if (gameRestart == true) {
						startOver == true;
					}
					else if (gameRestart == false) {
						startOver == false;
					}
				}
			}
		}
		}
	

	std::cout << "Wins = " << wins << "\nLosses = " << losses << std::endl;
}

int Wilhelm() 
{	
	srand(time(0));
	startGameWilhelm();
	return 0;
}