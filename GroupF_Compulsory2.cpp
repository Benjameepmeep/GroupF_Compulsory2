// GroupF_Compulsory2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Philip.h"
#include "Player.h"

int main()
{
    Wilhelm(); //This runs the game, just missing a while loop to play the game again
    startGame();
    std::cout << RNG(2, 1000);
    return 0;
}