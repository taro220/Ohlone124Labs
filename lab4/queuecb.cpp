#include "lab.h"

void queue_cb(Fl_Callback*, void*){
    
    static Fl_Cairo_Window qw(Width/2,Height/2);
    static Fl_Text_Buffer tb;
    static Fl_Text_Display td(0,0,Width/2,Height/2,"Queues");
    qw.label("Queues");
    td.buffer(&tb);
    
    
    std::string q = "Orders:\n" + ordersQueue->Print() + "\n";
    q+= "Drivers:\n" + driversQueue->Print() + "\n";
    tb.text(q.c_str());
    qw.add(td);
    qw.show();
    
    //read each queue, concatinate a string, display in a text box
    
    
}
