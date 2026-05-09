#include <iostream>

int main() {

    unsigned int n, egyes = 0, kettes = 0, harmas = 0, negyes = 0, otos = 0;
    unsigned short osztalyzat;
    std::cout << "Tanulok szama: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "Osztalyzat: ";
        std::cin >> osztalyzat;
        switch (osztalyzat) {
            case 1:
                egyes++;
                break;
            case 2:
                kettes++;
                break;
            case 3:
                harmas++;
                break;
            case 4:
                negyes++;
                break;
            case 5:
                otos++;
                break;
        }
    }
    std::cout << "Egyes: " << egyes << std::endl;
    std::cout << "Kettes: " << kettes << std::endl;
    std::cout << "Harmas: " << harmas << std::endl;
    std::cout << "Negyes: " << negyes << std::endl;
    std::cout << "Otos: " << otos << std::endl;
    std::cout << "Kozepesnel jobb: " << (double)(otos + negyes) / n * 100 << "%" << std::endl;
    std::cout << "Atlag: " << (double)(5*otos + 4*negyes + 3*harmas + 2*kettes + egyes) / n << std::endl;

    return 0;
}
