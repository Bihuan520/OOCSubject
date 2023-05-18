#include "money.h"

Money::Money() {
	wallet = 1000;
	bet = 0;
}

Money::Money(int win, int lose) {
	winBet(win);
	loseBet(lose);
}

void Money::setBet(int b) {
	bet = b;
}

void Money::winBet(int wb) {
	wallet += bet;
}

void Money::loseBet(int lb) {
	wallet -= bet;
}

int Money::getWallet() {
	return wallet;
}

int Money::getBet() {
	return bet;
}