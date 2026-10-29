//եթե  extern օգտագործվի մի ֆայլում, նորմալ կլինի՞
#include <iostream>
extern int globalVar; //declaration
int main() {
    std::cout << globalVar << std::endl; // օկ ա
    return 0;
}
int globalVar = 42; // definition
