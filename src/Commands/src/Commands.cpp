#include <iostream>
#include "Commands.hpp"

void ClearScreen()
{
    std::cout << "\x1B[2J\x1B[H";
}

void WriteLineToScreen(char *line)
{
    std::cout << line << "\n";
}