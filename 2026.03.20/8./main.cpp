#include <iostream>

int main() {

    int elso;
    int masodik;

    std::cout << "Elso nepszamlalas: ";
    std::cin >> elso;

    std::cout << "Masodik nepszamlalas: ";
    std::cin >> masodik;

    std::cout << masodik / (double)elso * 100 - 100 << "% volt a novekedes." << std::endl;

    return 0;
}
