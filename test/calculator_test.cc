// test/calculator_test.cc
#include <gtest/gtest.h>
#include "calculator.hpp"

TEST(CalculatorTest, BasicAssertions)
{
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}