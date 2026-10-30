#include <iostream>

template <int N>
int fib = fib<N - 1>+fib<N - 2>;


template <>
int fib<0> =1;

template <>
int fib<1> =1;

int main() {
   int x=fib<10>;
   std::cout<<x;
    return 0;
}
