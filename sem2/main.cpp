#include "Hypotenuse.h"

#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Enter integer legs: ";
    if (!(std::cin >> a >> b) || a <= 0 || b <= 0) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    const int fixedA = a;
    const int fixedB = b;
    std::cout << "Integer hypotenuse: " << Hypotenuse<int>(fixedA, fixedB) << '\n';
    std::cout << "Randomized integer result: " << RandomHypotenuse(a, b) << '\n';

    double x = 0.0;
    double y = 0.0;
    std::cout << "Enter two double legs: ";
    if (!(std::cin >> x >> y) || x <= 0 || y <= 0) {
        std::cerr << "Invalid input.\n";
        return 1;
    }
    const double fixedX = x;
    const double fixedY = y;
    std::cout << "Double hypotenuse: " << Hypotenuse<double>(fixedX, fixedY) << '\n';
    std::cout << "Randomized double result: " << RandomHypotenuse(x, y) << '\n';
}
