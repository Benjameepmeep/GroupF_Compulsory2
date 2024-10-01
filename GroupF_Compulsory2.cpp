#include <iostream>
#include <string>
int main()
{
    //If we make a new gamemode, this is where we ask the user which mode to choose. For now, line 5 does nothing.
    
    //This line will call startGame(), which I will not add until that has been developed more.
    std::cout << "Do you want to battle again? (y/n)\n";
    std::string input;
    bool answeredWhetherToTryAgain = false;
    while (answeredWhetherToTryAgain = false)
    {
        std::cin >> (input);
        
        if (input == "y")
        {
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

        //switch (input)
        //{
        //case "y": //Note: this causes an error, as it does not recognize y as a string. Will fix on thursday.
        //    main();
        //    answeredWhetherToTryAgain = true;
        //    break;
        //case "n":
        //    answeredWhetherToTryAgain = true;
        //    break;
        //default:
        //    std::cout << "Invalid input.\n";
        //    break;
        //}
    }
    return 0;
}
