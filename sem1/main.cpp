#include "Hypotenuse.h"
#include "RandomHypotenuse.h"

#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Enter the two legs (positive integers): ";
    if (!(std::cin >> a >> b) || a <= 0 || b <= 0) {
        std::cerr << "Invalid input.\n";
        return 1;
    }

    std::cout << "Hypotenuse (integer result): " << Hypotenuse(a, b) << '\n';
    std::cout << "Randomized result: " << RandomHypotenuse(a, b) << '\n';
}
