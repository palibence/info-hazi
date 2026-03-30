#include <iostream>

int main() {

    unsigned short darab = 0;

    std::cout << "Add meg a vásárolt jegyek szamat: ";
    std::cin >> darab;

    std::cout << "A jegyek teljes ara kedvezmeny nelkul: " << darab * 1800 << " Ft" << std::endl;
    std::cout << "5 jegyes csoportok szama: " << darab / 5 << std::endl;
    std::cout << "Kedvezmeny osszege: " << ( darab / 5 ) * 200 << " Ft" << std::endl;
    std::cout << "Fizetendo osszeg: " << ( darab * 1800 ) - ( darab / 5 * 200 ) << " Ft" << std::endl;

    return 0;
}
