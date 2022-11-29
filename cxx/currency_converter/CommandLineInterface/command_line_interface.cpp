#include <iostream>
#include "../ConvertCurrency/convert_currency.h"

void command_line_interface()
{
    std::cout << "Input USD Amount: ";
    float usd = 0;
    float exchangeRate = 1329.00;
    std::cin >> usd;
    float won = convertCurrency(usd, exchangeRate);
    std::cout << usd << " Dollars is equal to " << won << " Korean Won.\n";
    return;
}