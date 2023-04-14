#include "money.h"

Money::Money(){
	wallet = 1000;
	bet = 0;
}

void Money::setBet(int b){
	bet = b;
}

int Money::getWallet(){
	return wallet;
}

int Money::getBet(){
	return bet;
}