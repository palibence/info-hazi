#include <iostream>

int main() {

    int mp = 0;

    std::cout << "Masodpercben: ";
    std::cin >> mp;

    std::cout << mp / 3600 << " ora" << std::endl;
    std::cout << ( mp % 3600 ) / 60 << " perc" << std::endl;
    std::cout << mp << " masodperc" << std::endl;

    return 0;
}
