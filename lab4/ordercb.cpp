#include "lab.h"
#include <iostream>

void order_cb(Fl_Callback*, void*){

    if(*address->value() && *item->value()){ //checks if input is empty
        
    ORDER* newOrder = new ORDER(); //make new ORDER object
    newOrder->address = address->value();
    newOrder->items = item->value();
    address->value("");
    item->value("");
    //create new order object with address and item value in the input box
    //clear input box
    ordersQueue->Insert(*newOrder); //dereference newOrder and pass to Insert
    //std::cout << newOrder->address << " " << newOrder->items << std::endl;
    //insert creates a new node and inserts it into the queue
    }
    
}
