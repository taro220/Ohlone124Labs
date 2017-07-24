#include "node.h"

struct SLL {
    
    Node *head;
    Node *tail;
    SLL(){
        this->head = nullptr;
        this->tail = nullptr;
    }
    SLL* insert(std::string city);
    SLL* insertInOrder(std::string city);
    SLL* build_directly(std::string city);    
    SLL* display_list();
    SLL* destroy_list();
};
