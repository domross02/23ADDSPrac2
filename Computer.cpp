#include "Computer.h"
Computer::Computer(){
    name="Computer";
}
Move* Computer::makeMove(){
    Move* move;
    move = new Move();
    move->compName();
    return move;
}