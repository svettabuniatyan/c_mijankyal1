//constuctor destructori ashxatanqi nuyn hajordakanutyun
#include <iostream>

class A{
private: int a;
public: 
A(int aa){
    a=aa;
    std::cout<<"constructor "<<a<<std::endl;
}
~A(){
    std::cout<<"destructor"<<a<<std::endl;
}
};

int main(){
   A* o1=new A(1);
   A* o2=new A(2);

   delete o1;
   delete o2;

   return 0;
}
