#ifndef POKER_H
#define POKER_H

#include "StartScreen.h"
#include "Money.h"
#include <string>
using namespace std;

class Poker {

private:
	Screen ss;
	Money mm;
	int card[53];
	string cardSuit[53];
	int drawCard;
	int cardPlayer[5];
	int cardBanker[5];
	int pointPlayer;
	int pointBanker;
	int cardAmountPlayer;
	int cardAmountBanker;
	bool askBankerContinue;

public:
	Poker();
	Screen getScreen();
	Money getMoney();
	void setMoney(Money);
	void shaffle();
	void cardA(int);
	void randomBankerAsk();
	void askCardPlayer();
	void askCardBanker();
	void getCardPlayer();
	void getCardBanker();
	int getPointPlayer() const;
	int getPointBanker() const;

};

#endif