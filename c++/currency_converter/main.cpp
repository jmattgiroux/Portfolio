// Main.cpp
#include <iostream>

float convertCurrency(float currency, float exchangeRate)
{
    return currency * exchangeRate;
}

// TODO: Use Currying to take a higher order function and make it specific for an exchange rate

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