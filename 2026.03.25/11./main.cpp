#include <iostream>

int main() {

    int szam = 0;

    std::cout << "Szam: ";
    std::cin >> szam;

    std::cout << szam / 100 + szam % 10 << std::endl;

    return 0;
}
