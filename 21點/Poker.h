#ifndef POKER_H
#define POKER_H

#include "StartScreen.h"
#include "Money.h"
#include <string>
using namespace std;

class Poker {

private:
	Screen ss;
	Money mm;
	int card[53]; // �x�s��ƵP��(���t���)
	string cardSuit[53]; // �x�s��ƵP��(�t���)
	int drawCard; // �Ȧs��쪺�U�i�P
	int cardPlayer[5]; // �x�s���a��쪺�P��
	int cardBanker[5]; // �x�s���a��쪺�P��
	int pointPlayer; // �x�s���a��U�`�I��
	int pointBanker; // �x�s���a��U�`�I��
	int cardAmountPlayer; // �������a�����P�ƶq
	int cardAmountBanker; // �������a�����P�ƶq
	bool askBankerContinue; // �������a�O�_�n�~���P

public:
	Poker(); // ��l�ƾ�ƵP��
	Screen getScreen();
	Money getMoney();
	void setMoney(Money);
	void playBanker(); // ���a�C��
	void shaffle(); // �H������U�@�i�P
	void cardA(int); // �߰ݪ��a A �P�I��
	void randomBankerAsk(); // ���v�M�w���a17�I��O�_�~��
	void askCardPlayer(); // �߰ݪ��a�O�_�~��
	void askCardBanker(); // �߰ݲ��a�O�_�~��
	void getCardPlayer(); // �L�X���a�ثe�P��
	void getCardBanker(); // �L�X���a�ثe�P��
	int getCardAmountPlayer() const; // ���o���a��P�ƶq
	int getPointPlayer() const; // ���o���a�̲��I��
	int getPointBanker() const; // ���o���a�̲��I��
	void printMoney(); // �L�X���a�ثe���]�ƻP�]�w��`
	void printCardPlayer(); // �L�X���a�ثe�P��
	void printCardBanker(); // �L�X���a�ثe�P��

};

#endif