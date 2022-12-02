#include <iostream>
#include <fstream>
#include <filesystem>
#include "Day2.h"

void Day2::Start(int userQuestionInput)
{
    if (userQuestionInput == 1)
    {
        //loop through input file.
        std::string line;
        std::string delimiter = " ";
        size_t pos = 0;
        std::string token;
        int totalScore = 0;
        
        std::ifstream inputFile("Input2.txt", std::ios::in);
        if (inputFile.is_open())
        {
            while (getline(inputFile, line))
            {
                if (!line.empty())
                {
                    while ((pos = line.find(delimiter)) != std::string::npos)
                    {
                        token = line.substr(0, pos);
                        line.erase(0, pos + delimiter.length());
                        //calculations
                        if (line == "X")
                        {
                            if (token == "A")
                            {
                                totalScore = totalScore + 4;
                            }
                            else if (token == "B")
                            {
                                totalScore = totalScore + 1;
                            }
                            else
                            {
                                totalScore = totalScore + 7;
                            }
                        }
                        else if (line == "Y")
                        {
                            if (token == "A")
                            {
                                totalScore = totalScore + 8;
                            }
                            else if (token == "B")
                            {
                                totalScore = totalScore + 5;
                            }
                            else
                            {
                                totalScore = totalScore + 2;
                            }
                        }
                        else if (line == "Z")
                        {
                            if (token == "A")
                            {
                                totalScore = totalScore + 3;
                            }
                            else if (token == "B")
                            {
                                totalScore = totalScore + 9;
                            }
                            else
                            {
                                totalScore = totalScore + 6;
                            }
                        }
                        
                    }
                }
            }
            inputFile.close();
        }
        else
        {
            std::cout << "Unable to open file" << std::endl;
            return;
        }
        std::cout << totalScore << std::endl;
        return;
    }
    else if (userQuestionInput == 2)
    {
        //loop through input file.
        std::string line;
        std::string delimiter = " ";
        size_t pos = 0;
        std::string token;
        int totalScore = 0;
        std::ifstream inputFile("Input2.txt", std::ios::in);
        if (inputFile.is_open())
        {
            while (getline(inputFile, line))
            {
                if (!line.empty())
                {
                    while ((pos = line.find(delimiter)) != std::string::npos)
                    {
                        token = line.substr(0, pos);
                        line.erase(0, pos + delimiter.length());
                        //calculations
                        //
                        if (line == "X")
                        {
                            if (token == "A")
                            {
                                totalScore = totalScore + 3;
                            }
                            else if (token == "B")
                            {
                                totalScore = totalScore + 1;
                            }
                            else
                            {
                                totalScore = totalScore + 2;
                            }
                        }
                        else if (line == "Y")
                        {
                            totalScore = totalScore + 3;
                            if (token == "A")
                            {
                                totalScore = totalScore + 1;
                            }
                            else if (token == "B")
                            {
                                totalScore = totalScore + 2;
                            }
                            else
                            {
                                totalScore = totalScore + 3;
                            }
                        }
                        else if (line == "Z")
                        {
                            totalScore = totalScore + 6;
                            if (token == "A")
                            {
                                totalScore = totalScore + 2;
                            }
                            else if (token == "B")
                            {
                                totalScore = totalScore + 3;
                            }
                            else
                            {
                                totalScore = totalScore + 1;
                            }
                        }
                    }
                }
            }
            inputFile.close();
        }
        else
        {
            std::cout << "Unable to open file" << std::endl;
            return;
        }
        std::cout << totalScore << std::endl;
        return;
    }
}
