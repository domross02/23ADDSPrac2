#include "Human.h"
#include <string>
#include <iostream>
Human::Human(std::string inname){
name=inname;

}
Human::Human(){
    name="Human";
}
char Human::makeMove(){
    char move;
    std::cout<<"Enter move: ";
    std::cin>>move;
    return move;
}