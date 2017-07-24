#include "music.h"
#include <iostream>

void PlayNote (NOTE &note, float tempo);

void PlayMusic (MUSICELMT music[], float tempo){
    
    STACK stack;
    const int MAXSTACK = 400, MAXARRAY = 9999;
    PLAY type;
    
    if(Create(stack, MAXSTACK) == FAILED) {
    return;
    }
    
    int current = 0;
    int finish = MAXARRAY;
    
    while (OK) {
        
        type = music[current].type;
        
        if(current <= finish && type != PLAYSTOP) {
            if (type == PLAYNOTE){
                PlayNote(music[current++].note, tempo);

            } else if (type == PLAYFRAGMENT) {
                Push(stack, current + 1);
                Push(stack, finish);
                finish = music[current].fragment.finish;
                current = music[current].fragment.start;
            }
        } else if (!TrueIfEmpty(stack)) {
                Pop(stack,finish);
                Pop(stack,current);
        } else {
            break;
        }
    }
    Destroy(stack);
    
}
