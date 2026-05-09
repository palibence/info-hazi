#include <iostream>
#include <random>

int main() {

    random_device rd;
    mt19937 rand(rd());

    unsigned long long n, hatos = 0;
    unsigned short dobas;
    std::cout << "N: " << std::endl;
    std::cin >> n;

    for (unsigned long long i = 0; i < n * 10; i++) {
        dobas = rand() % 6;
        if (dobas == 5) {
            hatos++;
        }
    }

    std::cout << hatos << "db hatos volt"

    return 0;
}
