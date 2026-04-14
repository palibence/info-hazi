#include <iostrem>

int main() {

    int a, b, c;

    std::cout << "1. szam: ";
    std::cin >> a;

    std::cout << "2. szam: ";
    std::cin >> b;

    std::cout << "3. szam: ";
    std::cin >> c;

    if (a > b) {

        int tmp = a;
        a = b;
        b = tmp;
    }

    if (b > c) {

        int tmp = b;
        b = c;
        c = tmp;
    }

    if (a > b) {

        int tmp = a;
        a = b;
        b = tmp;
    }

    std::cout << a << ", " << b << ", " << c << std::endl;

    return 0;
}
