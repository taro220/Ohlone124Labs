#include "lab.h"

SLL* SLL::insert(std::string city) {
    
        Node *newNode = new Node(city);

        if (!this->head) {
            this->head = newNode;
        } else {
            Node *temp = this->head;
            this->head = newNode;
            newNode->next = temp;
        }
        
        return this;
    }
