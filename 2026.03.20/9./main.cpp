#include <iostream>

int main() {

    float t, s;

    std::cout << "Ido (masodpercben): ";
    std::cin >> s;

    std::cout << "Tavolsag (meterben): ";
    std::cin >> t;

    std::cout << "Sebesseg: " << t / s * 3.6 << " km/h" << std::endl;

    std::cout << "Tempo: " << s / ( (t / 1000) * 60 ) << " perc/km" << std::endl;

    return 0;
}
