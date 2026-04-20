#include <iostream>
#include <cmath>

int main() {

    unsigned int h, t;

    std::cout << "h: ";
    std::cin >> h;

    std::cout << "t: ";
    std::cin >> t;

    std::cout << "k: " << std::sqrt(h * h + t * t) << std::endl;

    return 0;
}
