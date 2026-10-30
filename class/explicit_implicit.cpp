#include <iostream>

class A{
private: size_t size;
public: explicit A(size_t s){
    std::cout<<s<<std::endl;
}
void foo(A n){
    std::cout<<"okay"<<std::endl;
}
};

int main(){
    A a(50);
   // a.foo(10);//implicit
    a.foo(A(10));//explicit
}
