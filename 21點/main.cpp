#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StartScreen.h"
#include "Poker.h"
#include "Money.h"
using namespace std;

int main() {

	Poker game;

	// 設定亂數
	srand(time(0));

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

	game.getScreen().clear(); // 清除執行視窗上的文字 

	while (game.getMoney().getWallet() >= 50) {

		game.setNewBet(); // 處理莊家遊玩 & 設定賭注
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
				game.printMoney();
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

		game.getScreen().clear();
		game.printMoney();

		// 處理本局遊戲賭金 & 顯示遊戲結果
		int bet = game.getMoney().getBet();

		// 若玩家持有五張牌且小於21，則直接獲勝（賭金*2）
		if (game.getCardAmountPlayer() == 5 && game.getPointPlayer() < 21) {
			game.setMoney(bet * 2, 0);
			game.getScreen().winMessage();

			// 若玩家持有五張牌且等於21，則直接獲勝（賭金*4）
		}
		else if (game.getCardAmountPlayer() == 5 && game.getPointPlayer() == 21) {
			game.setMoney(bet * 4, 0);
			game.getScreen().winMessage();

		}
		else {

			// 玩家和莊家的總點數都小於等於21，則點數大者獲勝；相同，則和局
			if (game.getPointPlayer() <= 21 && game.getPointBanker() <= 21) {

				if (game.getPointPlayer() > game.getPointBanker()) {
					game.setMoney(bet, 0);
					game.getScreen().winMessage();

				}
				else if (game.getPointPlayer() < game.getPointBanker()) {
					game.setMoney(0, bet);
					game.getScreen().loseMessage();

				}
				else {
					game.setMoney(0, 0);
					game.getScreen().tieMessage();
				}

				// 玩家的總點數爆了（超過21點），則玩家輸掉下注金額
			}
			else if (game.getPointPlayer() > 21 && game.getPointBanker() <= 21) {
				game.setMoney(0, bet);
				game.getScreen().loseMessage();

				// 莊家的總點數爆了（超過21點），則玩家贏得下注金額
			}
			else if (game.getPointPlayer() <= 21 && game.getPointBanker() > 21) {
				game.setMoney(bet, 0);
				game.getScreen().winMessage();

				// 玩家和莊家的總點數都爆了（超過21點），則玩家輸掉下注金額
			}
			else if (game.getPointPlayer() > 21 && game.getPointBanker() > 21) {
				game.setMoney(0, bet);
				game.getScreen().loseMessage();
			}

		}

		// 印出玩家 & 莊家結果牌組
		game.printCardPlayer();
		game.printCardBanker();

		game.restart(); // 重設遊戲
		game.getScreen().succeedInformation();

		while (enterNum != 0) {
			cin >> enterNum;
		}

		enterNum = -1;
		game.getScreen().clear();

	}

	game.printMoney();
	game.getScreen().gameOverMessage();

}