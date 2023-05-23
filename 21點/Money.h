#ifndef MONEY_H
#define MONEY_H

class Money {

private:
	int wallet; // 令錢包餘額變數
	int bet; // 令賭注金額變數

public:
	Money(); // 初始化錢包餘額
	void setBet(int); // 設置賭注金額
	void winBet(int); // 處理錢包餘額變動(贏)
	void loseBet(int); // 處理錢包餘額變動(輸)
	int getWallet() const; // 取得錢包餘額
	int getBet() const; // 取得當前賭注金額

};

#endif