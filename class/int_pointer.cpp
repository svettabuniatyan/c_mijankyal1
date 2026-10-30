class IntPtr {
private:
    int* ptr;

public:
    explicit IntPtr(int* p = nullptr) : ptr(p) {
        std::cout << "Pointer Created" << std::endl;
    }

    ~IntPtr() {
        delete ptr;
        std::cout << "Pointer Destroyed" << std::endl;
    }

    int& operator*() {
        return *ptr; 
    }
};
