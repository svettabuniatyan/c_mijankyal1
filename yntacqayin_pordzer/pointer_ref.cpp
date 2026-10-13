#include <iostream>

int main () {
    int b = 5;
    double d = 4.6;

    int &a = b; std::cout << a << "\n"; //5

    int &a = d; std::cout << a << "\n"; //no

    int &a = 2; std::cout << a << "\n"; //no, 2y hxum chi

    const int &a = 2; std::cout << a << "\n"; //2

    return 0;
}
