#include "pch.h"

// I am using Visual Studio 2022 and I found a solution where to use IsLeapYearTest.h I needed to get the directory of the .h file 
#include "/StudiaII/Praktyki/Writing unit tests/HomeWork/HomeWork/IsLeapYear.h" 

TEST(IsLeapYearTest, TypicalLeapYear) {
    EXPECT_TRUE(IsLeapYear(1996));
}

TEST(IsLeapYearTest, TypicalNonLeapYear) {
    EXPECT_FALSE(IsLeapYear(1997));
}

TEST(IsLeapYearTest, DivisibleBy100ButNot400) {
    EXPECT_FALSE(IsLeapYear(1900));
}

TEST(IsLeapYearTest, DivisibleBy400) {
    EXPECT_TRUE(IsLeapYear(2000));
}