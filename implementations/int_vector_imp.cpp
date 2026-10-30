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
    int& operator[](size_t index){
        return data[index];
    }
    size_t sizee () const {
        return size; 
    }

    size_t capacity () const {
        return cap;
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
        std::cout << v[i] << " ";

    return 0;
}
