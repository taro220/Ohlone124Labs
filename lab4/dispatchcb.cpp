#include <iostream>
#include "lab.h"
void dispatch_cb(void*){
    while(!ordersQueue->isEmpty() && !driversQueue->isEmpty()){
        ORDER order;
        
        std::string s = ""; std::string driver = "";
        
        if(driversQueue->Remove(driver)){
            s+= driver + " is delivering ";
        }
        if(ordersQueue->Remove(order)){
            s+= order.items + " to " + order.address;
        }
    
        fl_message_title("Your Pizza is on its way!");
        fl_alert(s.c_str());

    }
    
    
    Fl::repeat_timeout(30.0,dispatch_cb);

}
