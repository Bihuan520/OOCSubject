#include "Poker.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

Poker::Poker() {

	pointPlayer = 0;
	pointBanker = 0;
	cardAmountPlayer = 0;
	cardAmountBanker = 0;

	for (int i = 0; i <= 51; i++) {
		if (i == 10 || i == 11 || i == 12) {
			card[i + 1] = 10;
		}
		else if (i == 23 || i == 24 || i == 25) {
			card[i + 1] = 10;
		}
		else if (i == 36 || i == 37 || i == 38) {
			card[i + 1] = 10;
		}
		else if (i == 49 || i == 50 || i == 51) {
			card[i + 1] = 10;
		}
		else {
			card[i + 1] = i % 13 + 1;
		}

	}

	for (int j = 1; j <= 52; j++) {
		if (1 <= j && j <= 13) {
			cardSuit[j] = "Spades";
		}
		else if (14 <= j && j <= 26) {
			cardSuit[j] = "Hearts";
		}
		else if (27 <= j && j <= 39) {
			cardSuit[j] = "Clubs";
		}
		else {
			cardSuit[j] = "Diamonds";
		}
	}

}

Screen Poker::getScreen() {
	return ss;
}

Money Poker::getMoney() {
	return mm;
}

void Poker::setMoney(int wb, int lb) {
	mm.winBet(wb);
	mm.loseBet(lb);
	mm.setBet(0);
}

void Poker::restart() {
	memset(cardPlayer, 0, sizeof(cardPlayer));
	memset(cardBanker, 0, sizeof(cardBanker));
	pointPlayer = 0;
	pointBanker = 0;
	cardAmountPlayer = 0;
	cardAmountBanker = 0;
}

void Poker::shaffle() {
	drawCard = rand() % 53 + 1;
}

void Poker::playBanker() {
	askBankerContinue = true;
	while (askBankerContinue == true && cardAmountBanker < 5) {
		randomBankerAsk();
	}
}
void Poker::cardA(int n) {
	if (n == 1) {
		pointPlayer += 1;
	}
	else if (n == 11) {
		pointPlayer += 11;
	}
	else {
		cout << "只能輸入數字1或11，請重新輸入：";
		cin >> n;
		cardA(n);
	}
}

void  Poker::randomBankerAsk() {
	if (pointBanker < 17) {
		askBankerContinue = true;
	}
	else {
		askBankerContinue = false;
	}

	if (askBankerContinue == true) {
		askCardBanker();
	}
}

void Poker::askCardPlayer() {
	shaffle();
	cardPlayer[cardAmountPlayer] = drawCard;
	cardAmountPlayer++;

	if (drawCard == 1 || drawCard == 14 || drawCard == 27 || drawCard == 40) {
		int n;
		cout << "請輸入卡牌A的點數：";
		cin >> n;
		cardA(n);
	}
	else {
		pointPlayer += card[drawCard];
	}
}

void Poker::askCardBanker() {
	shaffle();
	cardBanker[cardAmountBanker] = drawCard;
	cardAmountBanker++;
	pointBanker += card[drawCard];
}

void Poker::getCardPlayer() {
	for (int i = 0; i < cardAmountPlayer; i++) {
		cout << cardSuit[cardPlayer[i]] << card[cardPlayer[i]] << ", ";
	}
	cout << endl;
}

void Poker::getCardBanker() {
	for (int i = 0; i < cardAmountBanker; i++) {
		cout << cardSuit[cardBanker[i]] << card[cardBanker[i]] << ", ";
	}
	cout << endl;
}

int Poker::getCardAmountPlayer() const {
	return cardAmountPlayer;
}

int Poker::getPointPlayer() const {
	return pointPlayer;
}

int Poker::getPointBanker() const {
	return pointBanker;
}

void Poker::printMoney() {
	cout << ">> 你的錢包餘額 $" << mm.getWallet() << "；目前下注 $" << mm.getBet() << endl << endl;
	ss.seperationLine();
}

void Poker::setNewBet() {
	int bet = 0;

	while (getMoney().getBet() < 50 || getMoney().getWallet() < bet) {
		printMoney();
		ss.betError();
		cin >> bet;
		mm.setBet(bet);
		ss.clear();

		if (getMoney().getBet() >= 50 && getMoney().getWallet() >= bet) {
			ss.clear();
			printMoney();
			ss.betSuccess();
		}
	}

	playBanker();
}

void Poker::printCardPlayer() {
	cout << "目前你的手牌: ";
	getCardPlayer();

	cout << "你的手牌總點數: " << getPointPlayer() << endl << endl;
}

void Poker::printCardBanker() {
	cout << "對手的手牌: ";
	getCardBanker();

	cout << "對手的手牌總點數: " << getPointBanker() << endl << endl;
}