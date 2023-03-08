
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
class Player{
    public:
    
    
    virtual char makeMove()=0;
    std::string getName();
    protected:
    std::string name;

};
#endif