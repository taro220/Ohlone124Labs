#include "lab.h"

SLL* SLL::display_list() {
    
    if(this->head){
        Node *curr = this->head;
    
        while(curr) {
            std::cout << curr->city << std::endl;
            curr = curr->next;
        }
    }
        return this;
}
