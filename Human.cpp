#include "Human.h"
#include <string>
#include <iostream>
Human::Human(std::string inname){
name=inname;

}
Human::Human(){
    name="Human";
}
Move* Human::makeMove(){
    
    move = new Move();
    move->setName();
    return move;
}