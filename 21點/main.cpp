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

	// ��ܹC���D�e��
	game.getScreen().gameTitle();
	game.getScreen().gameRules();
	game.getScreen().seperationLine();
	game.getScreen().gameInstruction();
	game.getScreen().seperationLine();
	game.getScreen().gameProgrammer();
	game.getScreen().succeedInformation();

	int enterNum = 9;
	while (enterNum != 0) {
		cin >> enterNum;
	}

	game.getScreen().clear();

	while (game.getMoney().getWallet() >= 0) {

		game.printMoney(); // �]�t�B�z���a�C��

		game.askCardPlayer(); // �_�쪱�a����@�i�P
		game.printCardPlayer(); // ��ܥثe���a��P
		game.getScreen().askContinueDraw();

		if (enterNum == 1) { // �n�D���P

		}else if (enterNum == 2) { // ����P

		}else if (enterNum == 3) { // ��󥻧�

		}else if (enterNum == 4) { // �����C��
			game.getScreen().clear();
			cout << "SYS: GAME ENDED.";
			break;
		}
		else {
			cin >> enterNum;
		}

	}

}