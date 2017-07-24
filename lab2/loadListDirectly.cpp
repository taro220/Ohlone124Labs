#include "lab.h"

bool loadListDirectly(std::string fname, SLL* &list){
    
    std::ifstream ifs(fname);
    if(!ifs)
        return false;
    
    std::string city;
    
    while(getline(ifs, city)){
        list->build_directly(city);
    }
    
    return true;


}
