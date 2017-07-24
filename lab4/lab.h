#include "config.h"
#include <FL/Fl_Cairo_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Buffer.H>
#include "llqueue.h"
#include "rbqueue.h"
#include <string>
const int Width = 500;
const int Height = 500;

extern Fl_Input* address;
extern Fl_Input* item;
extern Fl_Input* driver;
extern RBQUEUE* driversQueue;
extern LLQUEUE* ordersQueue;

void dispatch_cb(void*);
void order_cb(Fl_Callback*, void*);
void queue_cb(Fl_Callback*, void*);
void drivers_cb(Fl_Callback*, void*);
