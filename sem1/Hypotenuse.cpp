#include "Hypotenuse.h"

#include <cmath>

int Hypotenuse(int a, int b) {
    return static_cast<int>(std::sqrt(static_cast<double>(a) * a + static_cast<double>(b) * b));
}
