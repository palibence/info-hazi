#include <iostream>

int main() {
    int n;

    std::cout << "N: ";
    std::cin >> n;

    std::cout << "Egy " << n << " oldalú sokszögnek " << n * (n - 3) / 2 << " átlója van." << std::endl;

    return 0;
}
