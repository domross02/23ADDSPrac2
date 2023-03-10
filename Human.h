#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
#include <iostream>
class Human:public Player{

    public:   
    Human(std::string inname);
    Human();
    Move * makeMove();
};
#endif