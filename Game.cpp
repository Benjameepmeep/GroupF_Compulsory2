#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"
int totalgold; //Declaring totalgold as a global variable. 

bool requestRestart()
{
    std::string input = "NoInput";
    bool answeredWhetherToTryAgain = false;
    bool restart;
    while (answeredWhetherToTryAgain == false)
    {
        std::cout << "Do you want to battle again? (y/n)\n";
        std::cin >> input;

        if (input == "y" or input == "Y")
        {
            answeredWhetherToTryAgain = true;
            restart = true;
            return restart;
        }
        else if (input == "n" or input == "N") //Ends program
        {
            answeredWhetherToTryAgain = true;
            restart = false;
            return restart;
        }
        else
        {
            std::cout << "Invalid input.\n"; //asks again
        }
    }
}

void getGold() //This function should get called whenever player wins.
{
    goldGainAmount(); //Calling this function returns a random value between 10 and 25
    totalgold += goldGainAmount();
    std::cout << "You got " << goldGainAmount() << " gold from that fight, and now have " << totalgold << " gold.\n";
}

void loseGold() //This function should get called whenever enemy wins.
{
    goldGainAmount(); //Using the same RNG for gaining gold (but different seed)
    totalgold -= goldGainAmount();
    int goldLoss = goldGainAmount();
    if (totalgold < 0) //This sets negative values up to 0, and changes the loss to reflect that.
    {
        goldLoss += totalgold; //Double negative becomes positive, so that means this should be positive. I'm confused. Well, it works!
        totalgold = 0;
    }
    std::cout << "The enemy took " << goldLoss << " gold from you, and now you have " << totalgold << " gold left.\n";
    if (totalgold == 0)
    {
        std::cout << "You are broke!\n";
    }
} 

int goldGainAmount() 
{
    srand(static_cast<unsigned int>(time(0))); //Makes a seed using the current time
    unsigned int goldGathered = rand() % 15 + 10; //random number from 10 to 25
    return goldGathered;
}




int main()
{
    totalgold = 70; //Sets the starting gold
    srand(time(0));

    //PLACEHOLDER TEXT! Change this text later if you have a better idea.
    std::cout << "You walk through a forest. You encounter an enemy!\nYou have " << totalgold << " pieces of gold in your pouch. Press enter to fight!";
    std::cin.ignore(); //Empty input only meant for the user to press enter to continue.

    // This runs the game
    Wilhelm();

    return 0;
}

