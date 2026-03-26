#include <iostream>

int main() {
    
    int n;

    std::cout << "N: ";
    std::cin >> n;

    std::cout << "Egy " << n << " oldalu sokszognek " << n * (n - 3) / 2 << " atloja van." << std::endl;

    return 0;
}
