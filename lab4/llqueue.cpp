#include "llqueue.h"

bool LLQUEUE::Insert(ORDER &info){
    
    NODE *newNode = new NODE;
    newNode->info = info;
    newNode->next = nullptr;
    if(!newNode) return false; //if failed to allocate 
    
    if (rear == NULL) //if queue is empty
        front = rear = newNode;
    else {  //there is a queue
        rear->next = newNode; //add newNode to end of queue
        rear = newNode; //newNode is end of the list
    }
}


std::string LLQUEUE::Print(){
    std::string s;
    int i = 1;
    NODE *curr = this->front;
    while(curr){
        s+= "Order " + std::to_string(i) + ": " + curr->info.items +
         " to " + curr->info.address + "\n";
        i++;
        curr = curr->next;
    }
    return s;
}

bool LLQUEUE::Remove (ORDER &info){
    
    if (front == NULL) return false;
    info = front->info;
    
    NODE *temp = front->next;
    delete front;
    front = temp;
    if (front == NULL)
        rear = NULL;
    return true;
}

LLQUEUE::~LLQUEUE(){
    NODE *curr;
    
    while(front){
        curr = front->next;
        delete front;
        front = curr;
    }
}
