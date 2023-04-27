#ifndef MONEY_H
#define MONEY_H

class Money {

private:
	int wallet;
	int bet;

public:
	Money();
	void setBet(int);
	void winBet(int);
	void loseBet(int);
	int getWallet();
	int getBet();

};

#endif