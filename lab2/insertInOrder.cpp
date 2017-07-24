#include "lab.h"

SLL* SLL::insertInOrder(std::string city) {
        
    Node *newNode = new Node(city);
    Node **nodeptr = &head;
        
    while(*nodeptr && (*nodeptr)->city <= city){
        nodeptr = &((*nodeptr)->next);
    }
    
    newNode->next = *nodeptr;
    *nodeptr = newNode;
    
    return this;
}
