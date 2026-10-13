#include "1.cpp"
#include "2.cpp"
#include "header.h"
#include <iostream>

inline int a = 100;

extern void print_a ();

int main () {
    std::cout << a << "\n";

    print_a ();

    return 0;
}

