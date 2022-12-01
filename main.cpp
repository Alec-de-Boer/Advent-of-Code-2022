#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>

int main()
{
    //loop through input file.
    std::string line;
    int x = 0;
    int y = 0;
    std::ifstream inputFile("Input.txt", std::ios::in);
    if (inputFile.is_open())
    {
        while (getline (inputFile,line))
        {
            std::cout << line;
            if (!line.empty())
            {
                int i = std::stoi(line);
                int z = x + i;
                x = z;
                std::cout << "Not empty: total so far: " << x << std::endl;
            }
            else
            {
                std::cout << "This one is empty, total was: " << x << std::endl;
                if(x > y)
                {
                    y = x;
                }
                x = 0;
            }
        }
        inputFile.close();
    }
    else std::cout << "Unable to open file" << std::endl;

    std::cout << "The largest number was: " << y << std::endl;

    //prevents application from automatically closing and waiting for user-input.
    std::cout << "Press any key to exit." << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
