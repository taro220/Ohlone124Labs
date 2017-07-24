#include <string>
const int BUFSIZE = 256;

class RBQUEUE { //circular queue
  private:
    std::string buf[BUFSIZE];
    int front;
    int rear;
    int nextIdx(int idx) {
        if(++idx == BUFSIZE) idx = 0; //if at end, return to front
        return idx;
    }
    
  public:  
    RBQUEUE() {front = rear = 0;}
    ~RBQUEUE() {}
    bool Insert (std::string s);
    bool Remove (std::string &s);
    std::string Print();
    bool isEmpty() {return (front == rear);}
    bool isFull() {return (nextIdx(rear) == front);}
};
