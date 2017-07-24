#include "lab.h"

SLL* SLL::destroy_list(){
    
    Node* curr = this->head;
    
    while (curr) {
        Node* temp = curr->next;
        std::cout << "deleting " << curr->city << std::endl;
        delete curr;
        curr = temp;
    }

    this->head = nullptr;
    return this;
    
}
