#ifndef MONEY_H
#define MONEY_H

class Money {

private:
	int wallet; // �O���]�l�B�ܼ�
	int bet; // �O��`���B�ܼ�

public:
	Money(); // ��l�ƿ��]�l�B
	void setBet(int); // �]�m��`���B
	void winBet(int); // �B�z���]�l�B�ܰ�(Ĺ)
	void loseBet(int); // �B�z���]�l�B�ܰ�(��)
	int getWallet() const; // ���o���]�l�B
	int getBet() const; // ���o��e��`���B

};

#endif