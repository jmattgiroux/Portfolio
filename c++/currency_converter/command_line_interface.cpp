// commandLineInterface.cpp
// This file holds the code that controls the command line interface.

#include <iostream>
#include "core_logic.h"

// TODO: Divide up code into 3 libraries (core logic, CLI program, and GUI program)
// Question: how to divide code up into libraries?
// Question: how to set up CMake for this project?

// TODO: Use OpenGL or GLFW to develop GUI version
// Resources:
// https://learnopengl.com/
// https://www.glfw.org/documentation.html

int main()
{
    std::cout << "Input USD Amount: ";
    float usd = 0;
    float exchangeRate = 1329.00;
    std::cin >> usd;
    float won = convertCurrency(usd, exchangeRate);
    std::cout << usd << " Dollars is equal to " << won << " Korean Won.\n";
    return 0;
}