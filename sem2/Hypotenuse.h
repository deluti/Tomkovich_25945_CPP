#pragma once

#include <cmath>
#include <random>

template <typename T>
T Hypotenuse(const T& a, const T& b) {
    return static_cast<T>(std::sqrt(a * a + b * b));
}

template <typename T>
T RandomHypotenuse(T& a, T& b) {
    static std::mt19937 generator(std::random_device{}());
    static std::bernoulli_distribution addRandomValue(0.5);
    static std::uniform_int_distribution<int> randomValue(1, 10);

    T result = Hypotenuse<T>(a, b);
    if (addRandomValue(generator)) {
        result += static_cast<T>(randomValue(generator));
    }
    return result;
}
