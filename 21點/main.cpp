#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StartScreen.h"
#include "Poker.h"
#include "Money.h"
using namespace std;

int main() {

	srand(time(0));

	Poker game;
	game.getStartscreen().getTitle();
	game.getStartscreen().getGameNotes();
	game.getStartscreen().getInstruction();
	game.getStartscreen().succeedInformation();

	int enterNum = 9;
	while (enterNum != 0) {
		cin >> enterNum;
	}

	game.getStartscreen().clear();

	cout << "SYS: GAME ENDED.";

}