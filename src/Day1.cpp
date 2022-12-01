#include <iostream>
#include <fstream>
#include <filesystem>
#include "Day1.h"

void Day1::Start(int userQuestionInput)
{
    if (userQuestionInput == 1)
    {
        //loop through input file.
        std::string line;
        int x = 0;
        int y = 0;
        std::ifstream inputFile("Input1.txt", std::ios::in);
        if (inputFile.is_open())
        {
            while (getline(inputFile, line))
            {
                if (!line.empty())
                {
                    int i = std::stoi(line);
                    int z = x + i;
                    x = z;
                }
                else
                {
                    if (x > y)
                    {
                        y = x;
                    }
                    x = 0;
                }
            }
            inputFile.close();
        }
        else
        {
            std::cout << "Unable to open file" << std::endl;
            return;
        }
        std::cout << "The largest number was: " << y << std::endl;
        return;
    }
        
        //Day 1 part 2 starts here.
    else if (userQuestionInput == 2)
    {
        //loop through input file.
        std::string line;
        int currentNumber = 0;
        int firstNumber = 0;
        int secondNumber = 0;
        int lastNumber = 0;
        std::ifstream inputFile("Input1.txt", std::ios::in);
        if (inputFile.is_open())
        {
            while (getline(inputFile, line))
            {
                if (!line.empty())
                {
                    int i = std::stoi(line);
                    int z = currentNumber + i;
                    currentNumber = z;
                }
                else
                {
                    if (currentNumber > lastNumber)
                    {
                        //check if any values are empty and fill them first.
                        if (firstNumber == 0)
                        {
                            firstNumber = currentNumber;
                        }
                        else if (secondNumber == 0)
                        {
                            secondNumber = currentNumber;
                        }
                        
                        //rotate numbers if the current number is higher than the current top 3.
                        if (currentNumber > firstNumber)
                        {
                            lastNumber = secondNumber;
                            secondNumber = firstNumber;
                            firstNumber = currentNumber;
                        }
                            
                            //rotate numbers if the current number is higher than the current second and third.
                        else if (currentNumber > secondNumber)
                        {
                            lastNumber = secondNumber;
                            secondNumber = currentNumber;
                        }
                        
                        else
                        {
                            lastNumber = currentNumber;
                        }
                    }
                    currentNumber = 0;
                }
            }
            inputFile.close();
        }
        else
        {
            std::cout << "Unable to open file" << std::endl;
        }
        std::cout << "The largest number was: " << firstNumber << " Followed by: " << secondNumber
                  << " Followed by: " << lastNumber << std::endl;
        std::cout << "Total: " << firstNumber + secondNumber + lastNumber << std::endl;
        return;
    }
}
