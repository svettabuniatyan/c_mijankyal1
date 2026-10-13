#include <iostream>

int main () {
    char name [7] = "Hello\0";
    
    * (name + 3 * sizeof (char)) = 't';
    std::cout << name << "\n"; //Helto
    
    name [3] = 'l';
    std::cout << name << "\n"; //Hello
    
    const char* const str1 = "hello"; //Read Only
    str1 = "world"; //chi stacvi
    str1[0] = 'H'; //chi stacvi
    
    const char* str2 = "hello";
    str2[0] = 'H'; //chi stacvi
    
    char str3[] = "hello";
    char* const ptr3 = str3; 
    ptr3 = "world"; //chi stacvi
    ptr3[0] = 'H'; //kstacvi
    
    char str4[] = "hello"; //read only
    char* ptr4 = str4; 
    ptr4 = "world"; //chi lini
    ptr4[0] = 'H'; //klini
    
    return 0;
}
