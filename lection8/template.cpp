#include <iostream>

template <class T>
T sum (T val1, T val2) {
    return val1 + val2;
}

int main () {
    std::cout << sum (5, 10) << std::endl << sum (5.5, 9.2) << std::endl;
    std::cout<<sum("5", "abcd");//karanq, bayc chi ashxati
    return 0;
}
