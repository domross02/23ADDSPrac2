#include "Move.h"
#include <iostream>
#include <string>

void Move::setName(){
    std::cout<<"Enter Move: ";
    std::cin>>name;
}
void Move::compName(){
    name="Rock";
}
std::string Move::getName(){
    return name;
}

