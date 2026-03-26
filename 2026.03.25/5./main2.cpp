#include <iostream>

int main() {

    int penz = 0;
    int cimletek[5] = {200, 100, 50, 20, 10};

    std::cout << "Penzosszeg: ";
    std::cin >> penz;

    int i = 0;
    while ( i < 5 ) {

        if (penz / cimletek[i] != 0) {
        
            std::cout << penz / cimletek[i] << " db " << cimletek[i] << std::endl;
            penz %= cimletek[i];
        }
        i++;
    }

    return 0;
}
