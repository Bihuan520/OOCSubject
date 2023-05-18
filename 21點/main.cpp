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

	int enterNum = -1; // 重置輸入數字
	while (enterNum != 0) {
		cin >> enterNum;
	}

	game.getScreen().clear();

	while (game.getMoney().getWallet() >= 0) {

		game.printMoney(); // 處理莊家遊玩 & 印出玩家錢的數據

		game.askCardPlayer(); // 起初玩家先抽一張牌
		game.printCardPlayer(); // 顯示目前玩家手牌

		bool continueDrawing = true;
		while (continueDrawing && game.getCardAmountPlayer() < 5 && game.getPointPlayer() < 21) {
				
			game.getScreen().askContinueDraw(); // 顯示詢問是否繼續抽牌訊息

			cin >> enterNum;

			switch (enterNum) {
				case 1: // 要求給牌
					game.askCardPlayer();
					game.getScreen().clear();
					game.printCardPlayer();
					break;

				case 2: // 停止給牌
					continueDrawing = false;
					break;

				default:
					break;

			}

			enterNum = -1;

		}

		// 處理本局遊戲賭金
		// 若玩家持有五張牌且小於等於21，則直接獲勝
		if (game.getCardAmountPlayer() == 5) {
			game.setMoney(Money(game.getMoney().getBet()*2, 0));

		}else {

		// 玩家和莊家的總點數都小於等於21，則點數大者獲勝；相同，則和局
			if (game.getPointPlayer() <= 21 && game.getPointBanker() <= 21) {

				if (game.getPointPlayer() > game.getPointBanker()) {
					game.setMoney(Money(game.getMoney().getBet(), 0));
				}else if (game.getPointPlayer() < game.getPointBanker()) {
					game.setMoney(Money(0, game.getMoney().getBet()));
				}else {
					game.setMoney(Money(0, 0));
				}

			// 玩家的總點數爆了（超過21點），則玩家輸掉下注金額
			}else if(game.getPointPlayer() > 21 && game.getPointBanker() <= 21){
				game.setMoney(Money(0, game.getMoney().getBet()));

			// 莊家的總點數爆了（超過21點），則玩家贏得下注金額
			}else if (game.getPointPlayer() <= 21 && game.getPointBanker() > 21) {
				game.setMoney(Money(game.getMoney().getBet(), 0));

			// 玩家和莊家的總點數都超過21點，則玩家輸掉下注金額
			}else if (game.getPointPlayer() > 21 && game.getPointBanker() > 21) {
				game.setMoney(Money(0, game.getMoney().getBet()));
			}

		}

	}

}