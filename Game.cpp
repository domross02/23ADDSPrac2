#include "Game.h"
#include<string>
Player* Game::runGame(Player* player1,Player* player2){
   Player* winner = nullptr;
   Move* player1move;
    Move* player2move;
    player1move = player1->makeMove();
    player2move = player2->makeMove();
    std::string hand1 = player1move->getName();
    std::string hand2 = player2move->getName();
    
    if((hand1=="Rock" && hand2=="Scissors")||(hand1=="Scissors"&&hand2=="Paper")||(hand1=="Paper"&&hand2=="Rock")){
      winner = player1;
    }
    if((hand2=="Rock" && hand1=="Scissors")||(hand2=="Scissors"&&hand1=="Paper")||(hand2=="Paper"&&hand1=="Rock")){
        winner = player2;
    }
    if((hand1=="Monkey"&& (hand2=="Robot"||hand2=="Ninja"))||(hand1=="Ninja"&&(hand2=="Zombie"||hand2=="Pirate"))||(hand1=="Pirate"&&(hand2=="Monkey"||hand2=="Robot"))||(hand1=="Robot"&&(hand2=="Ninja"||hand2=="Zombie"))||(hand1=="Zombie"&&(hand2=="Pirate"||hand2=="Monkey"))){
      winner = player1;
    }
    if((hand2=="Monkey"&& (hand1=="Robot"||hand1=="Ninja"))||(hand2=="Ninja"&&(hand1=="Zombie"||hand1=="Pirate"))||(hand2=="Pirate"&&(hand1=="Monkey"||hand1=="Robot"))||(hand2=="Robot"&&(hand1=="Ninja"||hand1=="Zombie"))||(hand2=="Zombie"&&(hand1=="Pirate"||hand1=="Monkey"))){
      winner = player2;
    }
    return winner;
}