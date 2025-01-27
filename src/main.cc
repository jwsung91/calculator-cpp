#include "calculator.hpp"

int main()
{
    Calculator calc;
    int var1 = 10;
    int var2 = 5;

    std::cout << "Plus: " << calc.Plus(var1, var2) << std::endl;
    std::cout << "Minus: " << calc.Minus(var1, var2) << std::endl;
    std::cout << "Divide: " << calc.Divide(var1, var2) << std::endl;
    std::cout << "Multiply: " << calc.Multiply(var1, var2) << std::endl;

    return 0;
}