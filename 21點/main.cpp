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
	game.getScreen().getTitle();
	game.getScreen().getGameNotes();
	game.getScreen().getInstruction();
	game.getScreen().succeedInformation();

	int enterNum = 9;
	while (enterNum != 0) {
		cin >> enterNum;
	}

	game.getScreen().clear();

	cout << "SYS: GAME ENDED.";

}