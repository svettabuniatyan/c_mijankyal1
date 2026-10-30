#include <iostream>

unsigned long long countValidRecursive(int n) {
    // base cases
    if (n == 1) return 0;
    if (n == 2) return 81;
    
    return 8 * countValidRecursive(n - 1) + 9 * countValidRecursive(n - 2);
}

int main() {
    int n;
    do{
    std::cout << "enter n: ";
    std::cin >> n;
    }
    while(n <= 0);

    std::cout << n << "-anish chkrknvox tveri qanaky: " 
              << countValidRecursive(n) << std::endl;

    return 0;
}
