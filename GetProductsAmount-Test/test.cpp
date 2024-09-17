#include "pch.h"

// I am using Visual Studio 2022 and I found a solution where to use GetProductsAmount.h I needed to get the directory of the .h file 
#include "/StudiaII/Praktyki/Writing unit tests/HomeWork/HomeWork/GetProductsAmount.h" 

TEST(GetProductsAmountTest, ExactMatch) {
    std::vector<int> prices = { 1, 2, 3, 4, 5 };
    EXPECT_EQ(GetProductsAmount(prices, 10), 4);
}

TEST(GetProductsAmountTest, InsufficientFunds) {
    std::vector<int> prices = { 10, 20, 30 };
    EXPECT_EQ(GetProductsAmount(prices, 5), 0);
}

TEST(GetProductsAmountTest, AllProducts) {
    std::vector<int> prices = { 5, 10, 15 };
    EXPECT_EQ(GetProductsAmount(prices, 50), 3);
}

TEST(GetProductsAmountTest, EmptyPrices) {
    std::vector<int> prices = {};
    EXPECT_EQ(GetProductsAmount(prices, 10), 0);
}

TEST(GetProductsAmountTest, SingleProduct) {
    std::vector<int> prices = { 20 };
    EXPECT_EQ(GetProductsAmount(prices, 15), 0);
    EXPECT_EQ(GetProductsAmount(prices, 20), 1);
}
