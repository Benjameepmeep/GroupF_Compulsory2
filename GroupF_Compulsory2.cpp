#include <iostream>
#include <string>
#include "game.h"
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
    // This runs the game
    Wilhelm();
    startGame();
    // start();
    std::cout << "Random Number: " << RNG(2, 1000) << '\n';

    requestRestart();
    return 0;
}
