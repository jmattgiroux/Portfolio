// commandLineInterface.cpp
// This file holds the code that controls the command line interface.

#include <iostream>
#include "convert_currency.h"

// TODO: Divide up code into 3 libraries (core logic, CLI program, and GUI program)
// Question: how to divide code up into libraries?

// TODO: Go through CMake tutorials
// Question: how to set up CMake for this project?
// resource: https://cmake.org/cmake/help/latest/guide/tutorial/index.html
// Tutorial Series: https://www.youtube.com/watch?v=nlKcXPUJGwA&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4
// Another Tutorial Series: https://www.youtube.com/watch?v=_yFPO1ofyF0&list=PLK6MXr8gasrGmIiSuVQXpfFuE1uPT615s

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