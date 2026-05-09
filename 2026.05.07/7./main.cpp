#include <iostream>
#include <random>

int main() {

    std::random_device rd;
    std::mt19937 rand(rd());

    unsigned int n;
    unsigned int vallalas;

    std::cout << "Korok szama: ";
    std::cin >> n;

    std::cout << "Vallalt nyulak szama: ";
    std::cin >> vallalas;

    unsigned int nyulak = 1;

    for (unsigned int i = 1; i <= n; ++i) {

        unsigned int nyul = 0;
        unsigned int ragadozo = 0;

        for (int j = 0; j < 2; ++j) {

            int dobas = rand() % 12;
            if (dobas < 6) {
                nyul++;
            }
            else if (dobas == 11) {
                ragadozo++;
            }
        }

        if (ragadozo > 0) {
            nyulak = 0;
        }
        else if (nyul > 0) {
            nyulak += (nyulak + nyul) / 2;
        }

        std::cout << i << ". lepes: "
                  << nyul << " nyul, "
                  << ragadozo << " ragadozo -> "
                  << "nyulak uj szama: "
                  << nyulak << std::endl;
    }

    if (nyulak >= vallalas && vallalas >= 2 * n) {
        std::cout << "Nyertel!" << std::endl;
    }
    else {
        std::cout << "Vesztettel!" << std::endl;
    }

    return 0;
}