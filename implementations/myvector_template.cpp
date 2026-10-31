#include <iostream>

template<typename T>
class myVector{
    private: 
    T* data;
    size_t size;
    size_t cap;
    void resize(){
        cap=cap*2;
        T* newData= new T[cap];
        for(size_t i=0; i<size; i++) newData[i]=data[i];
        delete[] data;
        data=newData;
    } 
    public:
    //default
    myVector(){
        size=0;
        cap=1;
        data= new T[cap];
    }
    //copy
    myVector(const myVector& other) {
        size = other.size;
        cap = other.cap;
        data = new T[cap];
        for(size_t i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    ~myVector(){
        delete[] data;
    }
    void pop_back () {
        if (size > 0) 
            size--;
    }
    void push_back(T val){
        if(size>=cap) resize();
        data[size]=val;
        size++;
    }
    T& at(size_t idx){
        return data[idx];
    }
    const T& at(size_t idx) const{
        return data[idx];
    }
    size_t sizee () const {
        return size; 
    }

    size_t capacity () const {
        return cap;
    }

    //operators
    T& operator[](size_t index){
        return data[index];
    }
    const T& operator[](size_t index) const {
        return data[index];
    }
    myVector operator+(const myVector& v2) const {
        myVector v3;
        delete[] v3.data;
        v3.size=0;
        v3.cap=this->size+v2.size;
        v3.data=new T[v3.cap];

        for(size_t i=0; i<this->size; i++) v3.data[v3.size++]=this->data[i];
        for(size_t i=0; i<v2.size; i++) v3.data[v3.size++]=v2.data[i];

        return v3;
    }
    const myVector& operator=(const myVector& other){
        if (this == &other) return *this;
        delete[] data;
        size=other.size;
        cap=other.cap;

        data=new T[cap];
        for(size_t i=0; i<size; i++)
        data[i]=other.data[i];

        return *this;
    }
    myVector& operator+=(const myVector& v2) {
        size_t newsize=size+v2.size;
        while(cap< newsize) {
            cap=cap*2;
        }
        T* newdata=new T[cap];
        for(size_t i=0; i<size; i++) newdata[i]=data[i];
        
        delete[] data;
        data=newdata;

        for(size_t i=0; i<v2.size; i++) data[size++] = v2.data[i];
        
        return *this;
    }

    bool operator==(const myVector& v2) const{
        if(size!=v2.size) return false;
        
        for(size_t i=0; i<size; i++)
            if(data[i]!=v2.data[i])
                return false;
                
        return true;
    }    

    bool operator!=(const myVector& v2)const {
        return !(*this == v2);
    }
};

