#include "astack.h"
#include <iostream>

STATUS Create(STACK &stack, int size){
    
    stack.buf = new int[size];
    if (!stack.buf)
        return FAILED;
    stack.size = size;
    stack.sp = 0;
    return OK;
}

STATUS Push(STACK &stack, int item){
    std::cout << "Stack Pushing " << item << std::endl;
    if (stack.sp == stack.size)
        return FAILED;
    stack.buf[stack.sp] = item;
    stack.sp++;
    
    return OK;
}

STATUS Pop(STACK &stack, int &item){
    if (stack.sp == 0)
        return FAILED;
    stack.sp--;
    item = stack.buf[stack.sp];
    return OK;
    
}


void Destroy(STACK &stack){
    
    delete [] stack.buf;
}
