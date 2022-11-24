// Main.cpp
#include <iostream>

float convertUSDToKRWon(float usd)
{
    return usd * 1326;
}

int main()
{
    std::cout << "Input USD Amount: ";
    float usd = 0;
    std::cin >> usd;
    float won = convertUSDToKRWon(usd);
    std::cout << usd << " Dollars is equal to " << won << " Korean Won.\n";
    return 0;
}