#include <iostream>

int main() {

    int ev;
    bool szokoev_e = false;

    std::cout << "Ev: ";
    std::cin >> ev;

    if (ev % 4 == 0) {

        szokoev_e = true;
        if (ev % 100 == 0) {

            szokoev_e = false;
            if (ev % 400 == 0) {

                szokoev_e = true;
            }
        }
    }

    if (szokoev_e) {

        std::cout << "Szokoev" << std::endl;
    } else {

        std::cout << "Nem szokoev" <<std::endl;
    }

    return 0;
}
