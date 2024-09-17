#include <iostream>
#include "GetProductsAmount.h"
#include "IsLeapYear.h"

int main()
{
    // GetProductsAmount
    std::vector<int> prices = { 5, 10, 3, 7, 20 };
    int amountOfMoney = 15;

    int productsCanBuy = GetProductsAmount(prices, amountOfMoney);
    std::cout << "With $" << amountOfMoney << ", you can buy "
        << productsCanBuy << " products." << std::endl;

    // IsLeapYear
    unsigned int year = 2000;
    if (IsLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    }
    else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    year = 1900;
    if (IsLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    }
    else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
