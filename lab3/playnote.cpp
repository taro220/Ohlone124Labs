#include <string>
#include "music.h"
#include <unistd.h>
#include <sstream>


void PlayNote(NOTE &note, float tempo){
    char p[] = "RABCDEFGABCDEFG";
    std::string s = "play -qn synth ";
        std::ostringstream oss;
        oss << tempo/8;
        s+= oss.str();
        s+= " sawtooth ";
        s+= p[note.tone];

        if(p[note.tone] != 'R')
            std::system(s.c_str());
        else
            usleep(2000000);
}
