#include <iostream>

int main() {
    float t, s;

    std::cout << "Idő (másodpercben): ";
    std::cin >> s;

    std::cout << "Távolság (méterben): ";
    std::cin >> t;

    std::cout << "Sebesség: " << t / s * 3.6 << " km/h" << std::endl;

    std::cout << "Tempó: " << s / t * 60 << " perc/km" << std::endl;

    return 0;
}
