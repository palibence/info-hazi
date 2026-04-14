#include <iostream>

int main() {

    unsigned int atmero, vastagsag;
    bool selejt_e = false;

    std::cout << "Atmero: ";
    std::cin >> atmero;

    std::cout << vastagsag;
    std::cin >> vastagsag;

    if ((atmero < 49 || atmero > 51) || (vastagsag < 10)) {

        selejt_e = true;
    }

    if (selejt_e) {

        std::cout << "Selejt" << std::endl;
    } else {
        
        std::cout << "Nem selejt" << std::endl;
    }

    return 0;
}
