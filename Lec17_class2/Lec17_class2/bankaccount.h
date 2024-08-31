#ifndef _bankaccount_h
#define _bankaccount_h

#include <iostream>
#include <string>


class BankAccount {
public:
	void withdraw(double money);
	void deposit(double money);
	double seeBalance() const;
	char seeName() const;
	BankAccount(char name);

	~BankAccount() {
		//���������������ʱ�� ���������ᱻ����
	}

private:
	double balance;
	char name;
};

bool operator ==(const BankAccount& ba1, BankAccount& ba2);
std::ostream& operator <<(std::ostream& out, const BankAccount& ba);

#endif