#include "astack.h"

struct NOTE {
    int tone;
    int duration;
};

struct FRAGMENT {
    int start;
    int finish;
};

enum PLAY {PLAYNOTE, PLAYFRAGMENT, PLAYSTOP};

struct MUSICELMT {
    PLAY type;
    union {
        NOTE note;
        FRAGMENT fragment;
    };
};

void PlayNote (NOTE &note, float tempo);
void PlayMusic (MUSICELMT music[], float tempo);
