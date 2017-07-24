#include "lab.h"
Fl_Input* address;  //fltk elements
Fl_Input* item;
Fl_Input* driver;
RBQUEUE* driversQueue; //declared rbqueue
LLQUEUE* ordersQueue;  //declared linked list queue

int main(){

    driversQueue = new RBQUEUE(); //allocate new rbqueue
    ordersQueue = new LLQUEUE(); //allocate new llqueue
    
    Fl_Cairo_Window cw(Width,Height);
    Fl_Button order(0.1*Width,0.1*Height,0.3*Width,0.05*Height,"Add Order");
    
    address = new Fl_Input(0.2*Width,0.2*Height,0.3*Width,0.05*Height,"Address");
    item = new Fl_Input(0.2*Width,0.3*Height,0.3*Width,0.05*Height,"Item");
    driver = new Fl_Input(0.2*Width,0.5*Height,0.3*Width,0.05*Height,"Driver");
    
    Fl_Button driver(0.1*Width,0.4*Height,0.3*Width,0.05*Height,"Add Driver");
    Fl_Button queue(0.1*Width,0.7*Height,0.3*Width,0.05*Height,"Queue");
    order.callback((Fl_Callback*)order_cb);
    driver.callback((Fl_Callback*)drivers_cb);
    queue.callback((Fl_Callback*)queue_cb);
    cw.label("Pizzas");
    cw.show();
    Fl::add_timeout(1.0,dispatch_cb);
    Fl::run();
    
    
}
