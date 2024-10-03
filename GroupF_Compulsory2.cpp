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
    unsigned int totalGold = 0;
    //If we make a new gamemode, this is where we ask the user which mode to choose. For now, line 5 does nothing.
    
    //This line will call startGame(), which I will not add until that has been developed more.
    getGold();
    totalGold += getGold();
    std::cout << "You got " << getGold() << " gold from that fight, and now have " << totalGold << " gold.";
    //requestRestart();
    return 0;
}
