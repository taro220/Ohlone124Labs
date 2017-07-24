#include <string>
#include <iostream>

struct ORDER {
    std::string address;
    std::string items;
};

struct NODE {
  ORDER info;
  NODE *next; 
};

class LLQUEUE {
  private:
    NODE *front;
    NODE *rear;
  public:
    LLQUEUE() { front = rear = nullptr; }
    ~LLQUEUE();
    bool Insert (ORDER &info);
    bool Remove (ORDER &info);
    bool isEmpty() {return (front == nullptr);}
    std::string Print();
    
    
};
