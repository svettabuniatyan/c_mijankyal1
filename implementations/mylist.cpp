#include <iostream>

template <typename T>
struct Node {
    T data;
    Node<T>* prev;
    Node<T>* next;

    Node(const T& val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};


template <typename T>
class mydoublelist {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    mydoublelist() {
        head = nullptr;
        tail = nullptr;
    }

    ~mydoublelist() {
        while (head != nullptr) {
            pop_front();
        }
    }

    void push_back(const T& val) {
    Node<T>* newNode = new Node<T>(val);
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void push_front(const T& val){
        Node<T>* newNode=new Node<T>(val);
        if(head==nullptr){
          head=newNode;
          tail=newNode;  
        } else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void pop_front(){
        if(head==nullptr) return;
        Node<T>* x=head;
        head=head->next;
        if(head!=nullptr) head->prev=nullptr;
        else tail=nullptr;
        delete x;
    }

    void pop_back(){
        if(tail==nullptr) return;
        Node<T>* x=tail;
        tail=tail->prev;
        if(tail!=nullptr) tail->next=nullptr;
        else head=nullptr;
        delete x;
    }

    void printlist(){
        Node<T>* current=head;
        std::cout<<"amboxj cucaky: ";
        while(current!=nullptr){
            std::cout<<current->data<<" ";
            current=current->next;
        }
        std::cout << std::endl;
    }
    
};
    

int main() {
   mydoublelist<int> intList;
    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30);
    intList.push_front(5);

    intList.printlist();//5 10 20 30
    return 0;
}
