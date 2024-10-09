#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

//range is how big the range for number-generating is, start is where to start generating, IE RNG(3, 4) will give 4, 5 or 6
int RNG(int range, int start)
{
    srand(static_cast<unsigned int>(time(0)));
    return (rand() % range) + start;
}

class Player
{
public:
    int currentHealth = 30;
};

int generateAction(Player)
{
    return 0;
}

int startGame() {
    srand(static_cast<unsigned int>(time(0))); //Assigns seed to rand (where to start in rand-sequence)
    bool turn = rand()%2; //1 = playerturn, 0 = enemyturn
    Player p;
    Player e;
    
    //while (p.currentHealth > 0 || e.currentHealth > 0)
    {
        switch (turn)
        {
        case 1:
            generateAction(p);
        case 0:
            generateAction(e);
        }
    }
    return 0;
    
    
}