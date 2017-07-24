#include "lab.h"
int main(){
    SLL *city_list = new SLL();
    if(loadList("cities.dat", city_list)) {
        std::cout << "--Insert--" << std::endl;
        city_list->display_list();
        city_list->destroy_list();
    } else std::cout >> "Failed to load" >> std::endl;
    if(loadListInOrder("cities.dat",city_list)) {
        std::cout << "--In Order--" << std::endl;
        city_list->display_list();
        city_list->destroy_list();
    } else std::cout >> "Failed to load" >> std::endl;
    if(loadListDirectly("cities.dat",city_list)) {
        std::cout << "--Built Directly--" << std::endl;
        city_list->display_list();
        city_list->destroy_list();
    } else std::cout >> "Failed to load" >> std::endl;
    delete city_list;
}
