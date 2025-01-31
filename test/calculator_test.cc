#include <gtest/gtest.h>
#include "calculator.hpp"

class CalculatorTest : public ::testing::Test
{
protected:
    Calculator Calc;
};

TEST_F(CalculatorTest, Addition)
{
    EXPECT_EQ(Calc.Plus(1, 1), 2);
}

TEST_F(CalculatorTest, Subtraction)
{
    EXPECT_EQ(Calc.Minus(2, 1), 1);
}

TEST_F(CalculatorTest, Multiplication)
{
    EXPECT_EQ(Calc.Multiply(2, 2), 4);
}

TEST_F(CalculatorTest, Division)
{
    EXPECT_EQ(Calc.Divide(4, 2), 2);
}

TEST_F(CalculatorTest, DivideByZero)
{
    EXPECT_THROW(Calc.Divide(4, 0), std::invalid_argument);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}