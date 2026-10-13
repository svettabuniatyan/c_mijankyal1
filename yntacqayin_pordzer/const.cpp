#include <iostream>

int main () {
    const int a = 5;
    a = 10; // error: assignment of read-only variable `a`
    
    char str[] = "hello"; //copy, grvum e Read Only-um
    char* ptr = str; 
    ptr = "world"; //no!!!
    ptr[0] = 'H'; //yes!!!
    
    return 0;
}
