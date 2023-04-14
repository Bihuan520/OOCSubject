#ifndef POKER_H
#define POKER_H

#include <string>
using namespace std;

class Poker{
	
	private:
		int card[53];
		string cardSuit[53];
		int tempCard;
		int cardPlayer[5];
		int cardBanker[5];
		int pointPlayer;
		int pointBanker;
		
	public:
		Poker();
		void shaffle();
		string getCardPlayer();
		string getCardBanker();
		
};

#endif