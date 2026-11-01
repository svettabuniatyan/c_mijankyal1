#include <iostream>
#include <stdexcept>
#include <memory>

template<typename T>
class myVector{
    private: 
    T* data;
    size_t size;
    size_t cap;
    
    void resize(){
        cap = cap * 2;
        T* newData = static_cast<T*>(::operator new(sizeof(T) * cap));
        
        for(size_t i = 0; i < size; i++) {
            new (&newData[i]) T(data[i]);
        }
        for(size_t i = 0; i < size; i++) {
            std::destroy_at(&data[i]);
        }
        ::operator delete(data);
        data = newData;
    } 

    public:
    //default 
    myVector(){
        size = 0;
        cap = 1;
        data = static_cast<T*>(::operator new(sizeof(T) * cap));
    }

    //copy 
    myVector(const myVector& other) {
        size = other.size;
        cap = other.cap;
        data = static_cast<T*>(::operator new(sizeof(T) * cap));
        for(size_t i = 0; i < size; i++) {
            new (&data[i]) T(other.data[i]);
        }
    }

    ~myVector(){
        for(size_t i = 0; i < size; i++) {
            std::destroy_at(&data[i]);
        }
        ::operator delete(data);
    }

    void pop_back () {
        if (size > 0) {
            size--;
            std::destroy_at(&data[size]);
        }
    }

    void push_back(T val){
        if(size >= cap) resize();
        new (&data[size]) T(val);
        size++;
    }

    T& at(size_t idx){
        if (idx >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[idx];
    }

    const T& at(size_t idx) const{
        if (idx >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[idx];
    }

    size_t sizee() const {
        return size; 
    }

    size_t capacity() const {
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
        myVector v3 = *this;
        v3 += v2;
        return v3;
    }

    const myVector& operator=(const myVector& other){
        if (this == &other) return *this;
        
        for(size_t i = 0; i < size; i++) {
            std::destroy_at(&data[i]);
        }
        ::operator delete(data);

        size = other.size;
        cap = other.cap;
        data = static_cast<T*>(::operator new(sizeof(T) * cap));

        for(size_t i = 0; i < size; i++) {
            new (&data[i]) T(other.data[i]);
        }

        return *this;
    }

    myVector& operator+=(const myVector& v2) {
        size_t newsize = size + v2.size;
        while(cap < newsize) {
            cap = cap * 2;
        }
        T* newdata = static_cast<T*>(::operator new(sizeof(T) * cap));
        
        for(size_t i = 0; i < size; i++) {
            new (&newdata[i]) T(data[i]);
        }
        for(size_t i = 0; i < size; i++) {
            std::destroy_at(&data[i]);
        }
        ::operator delete(data);
        data = newdata;

        for(size_t i = 0; i < v2.size; i++) {
            new (&data[size]) T(v2.data[i]);
            size++;
        }
        
        return *this;
    }

    bool operator==(const myVector& v2) const{
        if(size != v2.size) return false;
        
        for(size_t i = 0; i < size; i++)
            if(data[i] != v2.data[i])
                return false;
                
        return true;
    }    

    bool operator!=(const myVector& v2) const {
        return !(*this == v2);
    }
};

int main() {
    myVector<int> v;
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

    myVector<int> v2;
    v2.push_back(40);
    v2.push_back(50);

    myVector<int> v3=v + v2;
    std::cout<<"v3: "; 
    for(size_t i=0; i<v3.sizee(); i++)
        std::cout<<v3.at(i)<<" ";
    std::cout<<std::endl;

    myVector<int> v4;
    v4 = v3;
     std::cout<<"v4: ";
    for(size_t i=0; i<v4.sizee(); i++)
        std::cout<<v4.at(i)<<" ";
    std::cout<<std::endl;

    return 0;
}
