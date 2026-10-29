#include <iostream>
int main() {
    const char* text = "hello";

    std::cout << (void*)text << std::endl;//ktpi hascen
    std::cout << text;//ktpi hello
    return 0;
}
