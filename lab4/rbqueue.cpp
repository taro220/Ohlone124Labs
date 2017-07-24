#include "rbqueue.h"

bool RBQUEUE::Insert (std::string s){
    if (isFull()) return false;
    buf[rear] = s;
    rear = nextIdx(rear);
    return true;
}

bool RBQUEUE::Remove (std::string &s){
    if (isEmpty()) return false;
    s = buf[front];
    front = nextIdx(front);
    return true;
}

std::string RBQUEUE::Print(){
    std::string s;
    for(int i = this->front; i< this->rear; i++){
        s+= "Driver " + std::to_string(i+1) + ": " + buf[i] + "\n";
    }
    
    return s;
}
