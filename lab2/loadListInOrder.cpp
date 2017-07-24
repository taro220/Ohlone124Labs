#include "lab.h"

bool loadListInOrder(std::string fname, SLL* &list){
    
    std::ifstream ifs(fname);
    if(!ifs)
        return false;
    
    std::string city;
    
    while(getline(ifs, city)){
        list->insertInOrder(city);
        
    }
    
    return true;
}
