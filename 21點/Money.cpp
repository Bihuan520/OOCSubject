#include "Money.h"

Money::Money() {
	wallet = 1000;
	bet = 0;
}

void Money::setBet(int b) {
	bet = b;
}

void Money::winBet(int wb) {
	wallet += wb;
}

void Money::loseBet(int lb) {
	wallet -= lb;
}

int Money::getWallet() const {
	return wallet;
}

int Money::getBet() const {
	return bet;
}