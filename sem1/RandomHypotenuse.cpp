#include "RandomHypotenuse.h"

#include <cmath>
#include <random>

int RandomHypotenuse(int a, int b) {
    static std::mt19937 generator(std::random_device{}());
    static std::bernoulli_distribution addRandomValue(0.5);
    static std::uniform_int_distribution<int> randomValue(1, 10);

    int result = static_cast<int>(std::sqrt(static_cast<double>(a) * a + static_cast<double>(b) * b));
    if (addRandomValue(generator)) {
        result += randomValue(generator);
    }
    return result;
}
