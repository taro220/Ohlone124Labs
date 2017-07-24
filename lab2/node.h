struct Node {
    std::string city;
    Node *next;
    
    Node(std::string city){
        this->city = city;
        this->next = nullptr;
    }
};
