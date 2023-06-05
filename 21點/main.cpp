#include <iostream>
#include <cstdlib>
#include <ctime>
#include "StartScreen.h"
#include "Poker.h"
#include "Money.h"
using namespace std;

int main() {

	Poker game;

	// �]�w�ü�
	srand(time(0));

	// ��ܹC���D�e��
	game.getScreen().gameTitle();
	game.getScreen().gameRules();
	game.getScreen().seperationLine();
	game.getScreen().gameInstruction();
	game.getScreen().seperationLine();
	game.getScreen().gameProgrammer();
	game.getScreen().succeedInformation();

	int enterNum = -1; // ���m��J�Ʀr
	while (enterNum != 0) {
		cin >> enterNum;
	}

	game.getScreen().clear(); // �M����������W����r 

	while (game.getMoney().getWallet() >= 50) {

		game.setNewBet(); // �B�z���a�C�� & �]�w��`
		game.askCardPlayer(); // �_�쪱�a����@�i�P
		game.printCardPlayer(); // ��ܥثe���a��P

		bool continueDrawing = true;
		while (continueDrawing && game.getCardAmountPlayer() < 5 && game.getPointPlayer() < 21) {

			game.getScreen().askContinueDraw(); // ��ܸ߰ݬO�_�~���P�T��

			cin >> enterNum;

			switch (enterNum) {
			case 1: // �n�D���P
				game.askCardPlayer();
				game.getScreen().clear();
				game.printMoney();
				game.printCardPlayer();
				break;

			case 2: // ����P
				continueDrawing = false;
				break;

			default:
				break;
			}

			enterNum = -1;

		}

		game.getScreen().clear();
		game.printMoney();

		// �B�z�����C����� & ��ܹC�����G
		int bet = game.getMoney().getBet();

		// �Y���a�������i�P�B�p��21�A�h������ӡ]���*2�^
		if (game.getCardAmountPlayer() == 5 && game.getPointPlayer() < 21) {
			game.setMoney(bet * 2, 0);
			game.getScreen().winMessage();

			// �Y���a�������i�P�B����21�A�h������ӡ]���*4�^
		}
		else if (game.getCardAmountPlayer() == 5 && game.getPointPlayer() == 21) {
			game.setMoney(bet * 4, 0);
			game.getScreen().winMessage();

		}
		else {

			// ���a�M���a���`�I�Ƴ��p�󵥩�21�A�h�I�Ƥj����ӡF�ۦP�A�h�M��
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

				// ���a���`�I���z�F�]�W�L21�I�^�A�h���a�鱼�U�`���B
			}
			else if (game.getPointPlayer() > 21 && game.getPointBanker() <= 21) {
				game.setMoney(0, bet);
				game.getScreen().loseMessage();

				// ���a���`�I���z�F�]�W�L21�I�^�A�h���aĹ�o�U�`���B
			}
			else if (game.getPointPlayer() <= 21 && game.getPointBanker() > 21) {
				game.setMoney(bet, 0);
				game.getScreen().winMessage();

				// ���a�M���a���`�I�Ƴ��z�F�]�W�L21�I�^�A�h���a�鱼�U�`���B
			}
			else if (game.getPointPlayer() > 21 && game.getPointBanker() > 21) {
				game.setMoney(0, bet);
				game.getScreen().loseMessage();
			}

		}

		// �L�X���a & ���a���G�P��
		game.printCardPlayer();
		game.printCardBanker();

		game.restart(); // ���]�C��
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