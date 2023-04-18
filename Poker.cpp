#include "Poker.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

Poker::Poker() {

	pointPlayer = 0;
	pointBanker = 0;

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

}

Startscreen Poker::getStartscreen() {
	return ss;
}

void Poker::shaffle() {
	tempCard = rand() % 53 + 1;
}

void Poker::getCardPlayer() {
	for (int i = 0; i < 5; i++) {
		cout << cardPlayer[i] << " ";
	}
}

void Poker::getCardBanker() {
	for (int i = 0; i < 5; i++) {
		cout << cardBanker[i] << " ";
	}
}