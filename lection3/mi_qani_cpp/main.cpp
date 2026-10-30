#include <iostream>
#include "header.h"

void printScore(); 
int main() {
    std::cout << "Initial score: " << global_score << std::endl;
    global_score = 250;
    printScore(); 

    std::cout<<"static var:"<<var()<<std::endl;//ashxatum a nenc, vonc static popoxakany

    return 0;
}
