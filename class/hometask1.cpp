//grel constructor, vor mneq inqners hishoxutyun tanq u jnjenq
#include <iostream>

class A{
private: int* ptr;
public: explicit A(int s){ 
    ptr=new int(s);
    std::cout<<"int constructory ashxatec"<<std::endl;
}
A(int* p){
    ptr=p;
    std::cout<<"int* constructory ashxatec"<<std::endl;
}
~A(){
    delete ptr;
    std::cout<<"destructory ashxatec"<<std::endl;
}
};

int main(){
    A a1(50);
    int* p=new int(100);
    A a2(p);
   
}
