#include "lab.h"
#include <iostream>

void drivers_cb(Fl_Callback*, void*){

    if(*driver->value()){ //checks if input box is empty
        driversQueue->Insert(driver->value()); //passing driver name to Insert function
        driver->value("");
    }
    
}
