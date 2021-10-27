#include <iostream>
#include "Commands.hpp"

void ClearScreen()
{
    std::cout << "\x1B[2J\x1B[H";
}