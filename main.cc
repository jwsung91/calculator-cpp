#include <iostream>
#include "calculator.hpp"

int main()
{
    Calculator calc;
    std::cout << "1 + 1 = " << calc.Plus(1, 1) << std::endl;
    std::cout << "2 - 1 = " << calc.Minus(2, 1) << std::endl;
    std::cout << "2 * 2 = " << calc.Multiply(2, 2) << std::endl;
    std::cout << "4 / 2 = " << calc.Divide(4, 2) << std::endl;
    return 0;
}