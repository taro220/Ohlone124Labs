#include "lab.h"

SLL* SLL::build_directly(std::string city) {
        
    Node *newNode = new Node(city);
    
    if (!this->head) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        this->tail->next = newNode;
        this->tail = newNode;
    }
        return this;
}
