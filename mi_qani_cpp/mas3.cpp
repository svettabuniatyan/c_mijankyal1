#include "mas1.cpp"
#include "mas2.cpp"
#include "header.h"

/*
inline int a = 1;
inline int a = 2;

 unenq multiple initializattion error, nuynn a inch vor grenq 

inline int a = 1;
int a = 2;*/
#include <iostream>

inline int a = 100;
extern void print_a ();

int main () {
    std::cout << a << "\n";

    print_a ();

    return 0;
}
