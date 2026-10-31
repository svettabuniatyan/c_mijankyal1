#include <iostream>

template <size_t N>
size_t fibonaci() {
    return fibonaci<N - 1>() + fibonaci<N - 2>();
}

template <>
size_t fibonaci<0>() {
    return 1; 
}
template <>
size_t fibonaci<1>() {
    return 1;
}

int main() {
    std::cout << "Fibonacci<10> = " << fibonaci<10>() << std::endl;

    return 0;
}
