#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

struct Point {
    int x;
    int y;
};

int main() {
    int count = 0;
    std::cout << "How many points? ";
    if (!(std::cin >> count) || count <= 0) {
        std::cerr << "Enter a positive count.\n";
        return 1;
    }

    std::unique_ptr<std::vector<Point>> points = std::make_unique<std::vector<Point>>();
    points->reserve(static_cast<std::size_t>(count));
    for (int i = 0; i < count; ++i) {
        Point point{};
        std::cout << "Enter legs for right triangle " << i + 1 << ": ";
        if (!(std::cin >> point.x >> point.y) || point.x <= 0 || point.y <= 0) {
            std::cerr << "Legs must be positive integers.\n";
            return 1;
        }
        points->push_back(point);
    }

    for (std::size_t i = 0; i < points->size(); ++i) {
        const Point& point = (*points)[i];
        const double length = std::sqrt(static_cast<double>(point.x) * point.x +
                                        static_cast<double>(point.y) * point.y);
        std::cout << "Triangle " << i + 1 << ": " << length << '\n';
    }
}
