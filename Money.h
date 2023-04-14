#infndef MONEY_H
#define MONEY_H

class Money{
	
	private:
		int wallet;
		int bet;
		
	public:
		Money();
		void setBet(int);
		int getWallet();
		int getBet();
		
};

#endif