#include <iostream>
#include <boost/thread.hpp>

int main()
{

    //prevents application from automatically closing and waiting for user-input.
    std::cout << "Press any key to exit." << std::endl;
    std::cin.ignore();
    std::cin.get();
    return 0;
}
