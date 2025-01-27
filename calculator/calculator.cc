#include "calculator.hpp"

int Calculator::Plus(int var1, int var2)
{
    return var1 + var2;
}

int Calculator::Minus(int var1, int var2)
{
    return var1 - var2;
}

int Calculator::Divide(int var1, int var2)
{
    if (var2 == 0)
        throw std::invalid_argument("Divide by zero");
    return var1 / var2;
}

int Calculator::Multiply(int var1, int var2)
{
    return var1 * var2;
}
