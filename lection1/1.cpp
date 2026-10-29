//c++ mainի մեջ ֆունկցիայի declaration կարանք անենք՞
#include <iostream>
int main() {
    void test();//declaration
    test();
    return 0;
}

// definition
void test() {
    std::cout << "hello !!!" << std::endl;
}
