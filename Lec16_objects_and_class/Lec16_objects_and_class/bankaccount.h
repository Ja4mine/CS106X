#ifndef _bankaccount_h
#define _bankaccount_h

#include <string>

class BankAccount {
public :
	void setDeposit(int i) {
		this->deposit = i;
	}
	void withdraw(int money) {
		this->deposit -= money;
	}
	BankAccount(char name) {
		this->name = name;
	}
private: 
	int deposit;
	char name;
};

#endif