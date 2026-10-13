#include <iostream>

int main () {
    const char* const str1 = "hello"; //Read Only
    str1 = "world"; //chi lini
    str1[0] = 'H'; //chi lini
    
    const char* str2 = "hello";
    str2 = "world"; //klini
    str2[0] = 'H'; //chi lini
    
    char str3[] = "hello";
    char* const ptr3 = str3; 
    ptr3 = "world"; //chi lini
    ptr3[0] = 'H'; //klini

    const char name[7] = "Hello\0";
    name[3] = 't';
    std::cout << name; //Error kunenanq

    return 0;
}
