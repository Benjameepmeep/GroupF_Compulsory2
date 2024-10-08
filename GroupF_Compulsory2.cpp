#include <iostream>
#include <string>
#include "GroupF_Compulsory2.h"
void requestRestart()
{
    std::string input = "NoInput";
    bool answeredWhetherToTryAgain = false;
    while (answeredWhetherToTryAgain == false)
    {
        std::cout << "Do you want to battle again? (y/n)\n";
        std::cin >> input;

        if (input == "y")
        {
            main(); //Restarts program by calling main
            answeredWhetherToTryAgain = true;
        }
        else if (input == "n") //Ends program
        {
            answeredWhetherToTryAgain = true;
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
    Wilhelm();
    startGame();
    // start();
    std::cout << "Random Number: " << RNG(2, 1000) << '\n';

    requestRestart();
    return 0;
}
