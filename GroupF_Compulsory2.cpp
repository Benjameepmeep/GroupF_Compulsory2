// GroupF_Compulsory2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Philip.h"
#include "Player.h"

int main()
{
    // This runs the game, just missing a while loop to play the game again
       Wilhelm();
       startGame();
       // start();
       std::cout << "Random Number: " << RNG(2, 1000) << '\n';

    return 0;
}