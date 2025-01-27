#include <gtest/gtest.h>
#include "calculator.hpp"

TEST(CalculatorTest, BasicAssertions)
{
    Calculator calc;
    EXPECT_EQ(calc.Plus(1, 1), 2);
    EXPECT_EQ(calc.Minus(2, 1), 1);
    EXPECT_EQ(calc.Multiply(2, 2), 4);
    EXPECT_EQ(calc.Divide(4, 2), 2);
}