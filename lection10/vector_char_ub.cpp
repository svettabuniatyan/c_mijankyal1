#include <iostream>
#include <vector>
int main(){

    std::vector<char> v={'h', 'e', 'l', 'l'};
    std::cout<<v.data();//UB
    return 0;
}
