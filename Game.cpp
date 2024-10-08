#include <iostream>
#include <string>
#include "game.h"
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
int main()
{
    //If we make a new gamemode, this is where we ask the user which mode to choose. For now, line 5 does nothing.
    
    //This line will call startGame(), which I will not add until that has been developed more.

    // This runs the game, just missing a while loop to play the game again
    srand(time(0));

    Wilhelm();
    startGame();
    // start();
    std::cout << "Random Number: " << RNG(2, 1000) << '\n';


    return 0;
}
