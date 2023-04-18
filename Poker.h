#ifndef POKER_H
#define POKER_H

#include "StartScreen.h"
#include <string>
using namespace std;

class Poker {

private:
	Startscreen ss;
	int card[53];
	string cardSuit[53];
	int tempCard;
	int cardPlayer[5];
	int cardBanker[5];
	int pointPlayer;
	int pointBanker;

public:
	Poker();
	Startscreen getStartscreen();
	void shaffle();
	void getCardPlayer();
	void getCardBanker();

};

#endif