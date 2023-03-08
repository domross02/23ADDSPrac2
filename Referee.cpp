#include "Referee.h"
Player * Referee::refGame(Player* player1, Player* player2){
    Player * winner;
    winner = nullptr;
    char hand1, hand2;
    hand1 = player1->makeMove();
    hand2 = player2->makeMove();
    if((hand1=='R' && hand2=='S')||(hand1=='S'&&hand2=='P')||(hand1=='P'&&hand2=='R')){
        winner = player1;
    }
    if((hand2=='R' && hand1=='S')||(hand2=='S'&&hand1=='P')||(hand2=='P'&&hand1=='R')){
        winner = player2;
    }
    
     
    return winner;

}