#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

int main(){
Player * h1;
Player * h2;
h1= new Human("Player1");
h2= new Human("Player2");
Referee r;

Player * w;
w = r.refGame(h1,h2);

if(w==nullptr){
    cout<<"It's a tie"<<endl;

}
else{
    cout<<"the winner is "<<w->getName()<<endl;
}

}