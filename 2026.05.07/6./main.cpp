#include <iostream>

int main() {
    unsigned int n, terulet = 0, nepesseg = 0, tmp;

    std::cout << "Orszagok szama: ";
    std::cin >> n;

    for (unsigned int i = 0; i < n; ++i) {
        std::cout << "Terulet (km2): ";
        std::cin >> tmp;
        terulet += tmp;

        std::cout << "Nepesseg (1000fo): ";
        std::cin >> tmp;
        nepesseg += tmp;
    }

    std::cout << "Nepsuruseg: " << nepesseg * 1000 / terulet << std::endl;

    return 0;
}
