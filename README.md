# Writing-Unit-Tests

Using Google Test complete next tasks

1. Cover next method with tests.

int GetProductsAmount(std::vector<int> prices, int amountOfMoney)
{
    std::sort(prices.begin(), prices.end());

    int sum = 0;
    for (size_t i = 0; i < prices.size(); ++i)
    {
        sum += prices[i];
        if (sum > amountOfMoney)
        {
            return i;
        }
    }

    return prices.size();
}


2. Implement method IsLeapYear described below and cover it with tests (You can try TDD here)

Given a year, report if it is a leap year.
The tricky thing here is that a leap year in the Gregorian calendar occurs:
on every year that is evenly divisible by 4
except every year that is evenly divisible by 100
unless the year is also evenly divisible by 400
For example, 1997 is not a leap year, but 1996 is. 1900 is not a leap year, but 2000 is.
