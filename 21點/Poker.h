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
	int card[53]; // 儲存整副牌組(不含花色)
	string cardSuit[53]; // 儲存整副牌組(含花色)
	int drawCard; // 暫存抽到的下張牌
	int cardPlayer[5]; // 儲存玩家抽到的牌組
	int cardBanker[5]; // 儲存莊家抽到的牌組
	int pointPlayer; // 儲存玩家當下總點數
	int pointBanker; // 儲存莊家當下總點數
	int cardAmountPlayer; // 紀錄玩家持有牌數量
	int cardAmountBanker; // 紀錄莊家持有牌數量
	bool askBankerContinue; // 紀錄莊家是否要繼續抽牌

public:
	Poker(); // 初始化整副牌組
	Screen getScreen();
	Money getMoney();
	void setMoney(Money);
	void playBanker(); // 莊家遊玩
	void shaffle(); // 隨機抽取下一張牌
	void cardA(int); // 詢問玩家 A 牌點數
	void randomBankerAsk(); // 機率決定莊家17點後是否繼續
	void askCardPlayer(); // 詢問玩家是否繼續
	void askCardBanker(); // 詢問莊家是否繼續
	void getCardPlayer(); // 印出玩家目前牌組
	void getCardBanker(); // 印出莊家目前牌組
	int getCardAmountPlayer() const; // 取得玩家手牌數量
	int getPointPlayer() const; // 取得玩家最終點數
	int getPointBanker() const; // 取得莊家最終點數
	void printMoney(); // 印出玩家目前錢包數與設定賭注
	void printCardPlayer(); // 印出玩家目前牌組
	void printCardBanker(); // 印出莊家目前牌組

};

#endif