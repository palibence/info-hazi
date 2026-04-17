#include <iostream>

int main() {

    unsigned int korok = 0, korido;
    unsigned long long osszeg = 0;

    std::cout << "Korido: ";
    std::cin >> korido;

    while (korido != -1) {

        korok++;
        osszeg += korido;
        std::cout << "Korido: ";
        std::cin >> korido;
    }

    std::cout << "Korok szama: " << korok << std::endl;

    std::cout << "Palyan toltott ido: " << osszeg / 3600 << " : " << osszeg % 3600 / 60 << " : " << osszeg % 3600 % 60 << std::endl;

    return 0;
}
