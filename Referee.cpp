#include "Referee.h"
#include <string>
Player * Referee::refGame(Player* player1, Player* player2){
    Player * winner;
    winner = nullptr;
    Game game;
    winner = game.runGame(player1,player2);
    return winner;
}