#include <iostream>
#include "music.h"

static const float tempo = 1.2;

static MUSICELMT music[] = {
    {PLAYNOTE, {1, 8}},
    {PLAYNOTE, {2, 8}},
    {PLAYNOTE, {3, 8}},
    {PLAYNOTE, {4, 8}},
    {PLAYNOTE, {5, 8}},
    {PLAYNOTE, {6, 8}},
    {PLAYNOTE, {7, 8}},
    {PLAYFRAGMENT, {0,5}},
    {PLAYFRAGMENT, {0,7}},
    {PLAYSTOP, {0,0}}
};

int main(){

    PlayMusic(music, tempo);
    
    return 0;
}

    

