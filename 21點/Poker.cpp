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
		card[i + 1] = i % 13 + 1;
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

	askCardBankerContinue = true;

	while (askCardBankerContinue != true) {
		askCardBanker();
	}

}

Screen Poker::getStartscreen() {
	return ss;
}

void Poker::shaffle() {
	drawCard = rand() % 53 + 1;
}

void  Poker::randomBankerAsk() {

	int percent80[5] = { 1, 1, 1, 1, 0 };
	int percent60[5] = { 1, 1, 1, 0, 0 };
	int percent20[5] = { 1, 0, 0, 0, 0 };

	if (pointBanker <= 12) {
		askCardBankerContinue = true;
	}
	else if (pointBanker > 12 && pointBanker <= 15) {
		int tempchance = rand() % 5;
		askCardBankerContinue = percent80[tempchance];
	}
	else if (pointBanker > 15 && pointBanker <= 18) {
		int tempchance = rand() % 5;
		askCardBankerContinue = percent60[tempchance];
	}
	else {
		int tempchance = rand() % 5;
		askCardBankerContinue = percent20[tempchance];
	}

	if (askCardBankerContinue = true) {
		askCardBanker();
	}

}

void Poker::askCardPlayer() {
	shaffle();
	cardPlayer[cardAmountPlayer] = drawCard;
	cardAmountPlayer++;
	pointPlayer += card[drawCard];
}

void Poker::askCardBanker() {
	shaffle();
	cardPlayer[cardAmountBanker] = drawCard;
	cardAmountBanker++;
	pointBanker += card[drawCard];
}

void Poker::getCardPlayer() {
	for (int i = 0; i <= cardAmountPlayer; i++) {
		cout << cardPlayer[i] << " ";
	}
}

void Poker::getCardBanker() {
	for (int i = 0; i < 5; i++) {
		cout << cardBanker[i] << " ";
	}
}