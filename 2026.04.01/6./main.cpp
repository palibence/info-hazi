#include <iostream>

int main() {

    unsigned long long mintavetelezes;
    unsigned int bitmelyseg, felvetel_hossz;
    unsigned short csatornaszam;

    std::cout << "Adja meg a mintavetelezesi frekvenciat (mintavetel/sec): ";
    std::cin >> mintavetelezes;

    std::cout << "Adja meg a bitmelyseget (bit/mintavetel): ";
    std::cin >> bitmelyseg;

    std::cout << "Adja meg, hogy sztereó-e (1/2): ";
    std::cin >> csatornaszam;

    std::cout << "Adja meg a felvetel hosszát (sec): ";
    std::cin >> felvetel_hossz;

    std::cout << "A felvetel merete: " << (mintavetelezes * bitmelyseg * csatornaszam * felvetel_hossz) / 8 << " byte" << std::endl;

    return 0;
}
