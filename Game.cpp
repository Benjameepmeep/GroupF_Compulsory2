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

    srand(time(0));

    // This runs the game
    Wilhelm();

    return 0;
}
