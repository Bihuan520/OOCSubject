#ifndef POKER_H
#define POKER_H

#include "StartScreen.h"
#include <string>
using namespace std;

class Poker {

private:
	Screen ss;
	int card[53];
	string cardSuit[53];
	int drawCard;
	int cardPlayer[5];
	int cardBanker[5];
	int pointPlayer;
	int pointBanker;
	int cardAmountPlayer;
	int cardAmountBanker;
	bool askCardBankerContinue;

public:
	Poker();
	Screen getStartscreen();
	void shaffle();
	void randomBankerAsk();
	void askCardPlayer();
	void askCardBanker();
	void getCardPlayer();
	void getCardBanker();

};

#endif