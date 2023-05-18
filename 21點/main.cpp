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

	int enterNum = -1; // ���m��J�Ʀr
	while (enterNum != 0) {
		cin >> enterNum;
	}

	game.getScreen().clear();

	while (game.getMoney().getWallet() >= 0) {

		game.printMoney(); // �B�z���a�C�� & �L�X���a�����ƾ�

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

		// �B�z�����C�����
		// �Y���a�������i�P�B�p�󵥩�21�A�h�������
		if (game.getCardAmountPlayer() == 5) {
			game.setMoney(Money(game.getMoney().getBet()*2, 0));

		}else {

		// ���a�M���a���`�I�Ƴ��p�󵥩�21�A�h�I�Ƥj����ӡF�ۦP�A�h�M��
			if (game.getPointPlayer() <= 21 && game.getPointBanker() <= 21) {

				if (game.getPointPlayer() > game.getPointBanker()) {
					game.setMoney(Money(game.getMoney().getBet(), 0));
				}else if (game.getPointPlayer() < game.getPointBanker()) {
					game.setMoney(Money(0, game.getMoney().getBet()));
				}else {
					game.setMoney(Money(0, 0));
				}

			// ���a���`�I���z�F�]�W�L21�I�^�A�h���a�鱼�U�`���B
			}else if(game.getPointPlayer() > 21 && game.getPointBanker() <= 21){
				game.setMoney(Money(0, game.getMoney().getBet()));

			// ���a���`�I���z�F�]�W�L21�I�^�A�h���aĹ�o�U�`���B
			}else if (game.getPointPlayer() <= 21 && game.getPointBanker() > 21) {
				game.setMoney(Money(game.getMoney().getBet(), 0));

			// ���a�M���a���`�I�Ƴ��W�L21�I�A�h���a�鱼�U�`���B
			}else if (game.getPointPlayer() > 21 && game.getPointBanker() > 21) {
				game.setMoney(Money(0, game.getMoney().getBet()));
			}

		}

	}

}