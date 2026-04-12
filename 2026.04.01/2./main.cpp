#include <iostream>

int main() {

    double dij, reggeli_ar;
    int gyerek_kedvezmeny, ejszakak, felnottek, gyerekek;
    bool ker_reggelit;

    std::cout << "Adja meg a szallas dijat (Ft/ejszaka/fo): ";
    std::cin >> dij;

    std::cout << "Adja meg a reggeli arat (Ft/ejszaka/fo): ";
    std::cin >> reggeli_ar;

    std::cout << "Adja meg a gyerek kedvezmeny szazalekban: ";
    std::cin >> gyerek_kedvezmeny;

    std::cout << "Adja meg az ejszakak szamat: ";
    std::cin >> ejszakak;

    std::cout << "Adja meg a felnottek szamat: ";
    std::cin >> felnottek;

    std::cout << "Adja meg a gyerekek szamat: ";
    std::cin >> gyerekek;

    std::cout << "Adja meg, hogy ker-e reggelit (1/0): ";
    std::cin >> ker_reggelit;

    if (ker_reggelit == 1) {
        std::cout << "A teljes osszeg: " << (dij + reggeli_ar) * ejszakak * (felnottek + gyerekek * (1 - gyerek_kedvezmeny / 100.0)) << " Ft" << std::endl;
    } else {
        std::cout << "A teljes osszeg: " << dij * ejszakak * (felnottek + gyerekek * (1 - gyerek_kedvezmeny / 100.0)) << " Ft" << std::endl;
    }
 
    return 0;
}
