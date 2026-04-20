#include <iostream>
#include <cmath>

int main() {

    short adat;
    unsigned int i = 1, legnagyobb_hely = 1;
    std::cout << "Adat: ";
    std::cin >> adat;
    short elozo = adat;
    short legnagyobb = 0;

    while (adat != -1) {
        if (std::abs(adat - elozo) > legnagyobb) {
            legnagyobb = std::abs(adat - elozo);
            legnagyobb_hely = i;
        }
        i++;
        elozo = adat;
        std::cout << "Adat: ";
        std::cin >> adat;
    }

    std::cout << "Legnagyobb: " << legnagyobb_hely << std::endl;

    return 0;
}
