#include "Poker.h"
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

srand(time());

Poker::Poker(){
	
	pointPlayer=0;
	pointBanker=0;
	
	for(int i=0; i<=51; i++){
		card[i+1] = i%13+1;
	}
	
	for(int j=1; j<=52; j++){
		if(1<=j && j<=13){
			cardSuit[j] = "Spades";
		}else if(14<=j && j<=26){
			cardSuit[j] = "Hearts";
		}else if(27<=j && j<=39){
			cardSuit[j] = "Clubs";
		}else{
			cardSuit[j] = "Diamonds";
		}
	}
	
}

void Poker::shaffle(){
	tempCard=rand()%53+1;
}

string Poker::getCardPlayer(){
	return cardPlayer;
}

string Poker::getCardBanker(){
	return cardBanker;
}