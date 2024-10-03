#include <iostream>
#include <string>
#include "GroupF_Compulsory2.h"
void requestRestart()
{
    std::cout << "Do you want to battle again? (y/n)\n";
    std::string input = "NoInput";
    bool answeredWhetherToTryAgain = false;
    while (answeredWhetherToTryAgain == false)
    {
        std::cin >> input;

        if (input == "y")
        {
            main();
            answeredWhetherToTryAgain = true;
        }
        else if (input == "n")
        {
            answeredWhetherToTryAgain = true;
        }
        else
        {
            std::cout << "Invalid input.\n";
        }
    }
}
int main()
{
    //If we make a new gamemode, this is where we ask the user which mode to choose. For now, line 5 does nothing.
    
    //This line will call startGame(), which I will not add until that has been developed more.
    requestRestart();
    return 0;
}
