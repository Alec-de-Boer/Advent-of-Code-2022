#include <iostream>
#include <fstream>
#include <filesystem>
#include "DaySwitcher.h"

int main()
{
    
    int userDayInput;
    int userQuestionInput;
    bool returnedFromClass = false;
    
    DaySwitcher daySwitcher;
    std::cout << "For which day would you like the solution? ";
    
    while (true)
    {
        std::cin.clear();
        std::cin >> userDayInput;
        std::cout << std::endl;
        if (userDayInput > 0 && userDayInput < 32)
        {
            std::cout << "For which question on Day " << userDayInput << " would you like the answer? ";
            while (true)
            {
                std::cin.clear();
                std::cin >> userQuestionInput;
                std::cout << std::endl;
                if (userQuestionInput == 1 || userQuestionInput == 2)
                {
                    
                    daySwitcher.Start(userDayInput, userQuestionInput);
                    returnedFromClass = true;
                    break;
                }
                else
                {
                    std::cout << "Please enter a valid number ";
                }
            }
        }
        else
        {
            std::cout << "Please enter a valid number ";
        }
        if (returnedFromClass)
        {
            break;
        }
    }
    //prevents application from automatically closing and waiting for user-input.
    std::cout << "Press any key to exit." << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
