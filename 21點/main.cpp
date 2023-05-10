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

	// 顯示遊戲主畫面
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

		game.printMoney(); // 包含處理莊家遊玩

		game.askCardPlayer(); // 起初玩家先抽一張牌
		game.printCardPlayer(); // 顯示目前玩家手牌
		game.getScreen().askContinueDraw();

		if (enterNum == 1) { // 要求給牌

		}else if (enterNum == 2) { // 停止給牌

		}else if (enterNum == 3) { // 放棄本局

		}else if (enterNum == 4) { // 關閉遊戲
			game.getScreen().clear();
			cout << "SYS: GAME ENDED.";
			break;
		}
		else {
			cin >> enterNum;
		}

	}

}