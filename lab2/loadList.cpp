#include "lab.h"


bool loadList(std::string fname, SLL* &list){
    
    std::ifstream ifs(fname);
    if(!ifs)
        return false;
    
    std::string city;
    
    while(getline(ifs, city)){
        list->insert(city);
        
    }

    return true;
    
}
