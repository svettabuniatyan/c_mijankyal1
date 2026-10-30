#include <iostream>

class myVector{
    private: 
    int* data;
    size_t size;
    size_t cap;
    void resize(){
        cap=cap*2;
        int* newData= new int[cap];
        for(size_t i=0; i<size; i++) newData[i]=data[i];
        delete[] data;
        data=newData;
    } 
    public:
    myVector(){
        size=0;
        cap=1;
        data= new int[cap];
    }
    ~myVector(){
        delete[] data;
    }
    void pop_back () {
        if (size > 0) 
            size--;
    }
    void push_back(int val){
        if(size>=cap) resize();
        data[size]=val;
        size++;
    }
    int& at(size_t idx){
        return data[idx];
    }
    const int& at(size_t idx) const{
        return data[idx];
    }
    size_t sizee () const {
        return size; 
    }

    size_t capacity () const {
        return cap;
    }
    //operators
    int& operator[](size_t index){
        return data[index];
    }
    myVector operator+(myVector& v2){
        myVector v3;
        v3.size=0;
        v3.cap=this->size+v2.size;
        v3.data=new int[v3.cap];

        for(size_t i=0; i<this->size; i++) v3.data[v3.size++]=this->data[i];
        for(size_t i=0; i<v2.size; i++) v3.data[v3.size++]=v2.data[i];

        return v3;
    }
    const myVector& operator=(const myVector& other){
        delete[] data;
        size=other.size;
        cap=other.cap;

        data=new int[cap];
        for(size_t i=0; i<size; i++)
        data[i]=other.data[i];

        return *this;
    }
};

int main() {
    myVector v;
    v.push_back (10);
    v.push_back (20);
    v.push_back (30);

    std::cout << "Size: " << v.sizee() << ", capacity: " << v.capacity() << "\n";

    v.pop_back();
    std::cout << "After pop, size: " << v.sizee() << ", capacity: " << v.capacity() << "\n";

    std::cout << "Elements of vector: ";
    for (size_t i = 0; i < v.sizee(); ++i)
        std::cout << v.at(i) << " ";
    std::cout<<std::endl;

    myVector v2;
    v2.push_back(40);
    v2.push_back(50);

    myVector v3=v + v2;
    std::cout<<"v3: ";
    for(size_t i=0; i<v3.sizee(); i++)
        std::cout<<v3.at(i)<<" ";
    std::cout<<std::endl;

    myVector v4;
    v4 = v3;
     std::cout<<"v4: ";
    for(size_t i=0; i<v4.sizee(); i++)
        std::cout<<v4.at(i)<<" ";
    std::cout<<std::endl;

    return 0;
}
