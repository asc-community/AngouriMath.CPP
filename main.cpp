#include <AngouriMath.h>
#include <iostream>

using namespace AngouriMath;

int main()
{
    // derivative
    Entity expr = "x * y + 2sin(x * y) - y^x";
    std::cout << expr.Differentiate("x") << "\n";

    // simplify
    Entity expr1 = "sin(a + 2)^2 + cos(a + 2)^2 + a / (a b)";
    std::cout << expr1.Simplify() << "\n";

    // matrix
    Entity expr2 = "[[3, 4], [a, b]] ^ 2";
    std::cout << expr2.Simplify() << "\n";

    // latex
    Entity expr3 = "integral(x^2, x) + [1, 2, 3] + sqrt(x ^ y)";
    std::cout << expr3.Latexise();

    return 0;
}