#include <iostream>
#include <string>
#include "morse.h"

int main(){
    TELEGRAPH station;
    char text[80], morse[600];
    
    TELEGRAPH::buildTree();
    TELEGRAPH::displayTree();
    
    std::cout << "\nEnter telegram ==> ";
    std::cin.getline(text,80);
    std::cout << "\nSending >>> ";
    station.Encode(text, morse);
    std::cout << morse;
    std::cout << " >>> Received\n\n";
    station.Decode(morse, text);
    std::cout << text << std::endl;
    TELEGRAPH::DestroyTree();
    std::cout << "tree destroyed\n";
    TELEGRAPH::displayTree();
    
}
