#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

int main(){
Player * c;
Player * h;
c= new Computer;
h= new Human;
Referee r;

Player * w;
w = r.refGame(c,h);

if(w==nullptr){
    cout<<"It's a tie"<<endl;

}
else{
    cout<<"the winner is "<<w->getName()<<endl;
}

}