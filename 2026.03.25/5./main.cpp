#include <iostream>

int main() {

    int penz = 0;

    std::cout << "Penzosszeg: ";
    std::cin >> penz;

    std::cout << penz / 200 <<" db 200as" << std::endl;
    penz %= 200;

    std::cout << penz / 100 <<" db 100as" << std::endl;
    penz %= 100;

    std::cout << penz / 50 <<" db 50es" << std::endl;
    penz %= 50;

    std::cout << penz / 20 <<" db 20as" << std::endl;
    penz %= 20;

    std::cout << penz <<" db 10es" << std::endl;

    return 0
}
