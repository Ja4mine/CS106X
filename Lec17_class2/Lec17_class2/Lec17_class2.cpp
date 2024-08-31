// Lec17_class2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include "bankaccount.h"
#include <vector>
int main()
{
    BankAccount a('s');
	vector<int> s(6);
}
/*
operator overloading

returnType operator op(parameters); //.h
returnType operator op(parameters){ //cpp
    statements;
};

可以矩阵运算 但很容易滥用

让我可以打印object ：： 重载<<

ostream& operator <<(ostream& out, Type& name){
	statements;
	return out;

	cout << a << b << c ((cout << a) << b) << c
}



*/


BankAccount::BankAccount(char name) {
	this->name = name;
	this->balance = 0;
}

void BankAccount::withdraw(double money) {
	if (balance >= money) {
		balance = balance - money;
	}
	else {
		std::cout << "You don't have enough money!" << std::endl;

	}

}

void BankAccount::deposit(double money) {
	balance += money;
}
double BankAccount::seeBalance() const {
	return this->balance;
}
char BankAccount::seeName() const {
	return this->name;
}

std::ostream& operator <<(std::ostream& out, const BankAccount& ba) {
	out << ba.seeName() << "," << "$" << ba.seeBalance();
	return out;

}

bool operator ==(const BankAccount& a1, const BankAccount& a2) {
	return a1.seeBalance() == a2.seeBalance() 
			&& a1.seeName() == a2.seeName();

} //但这种情况下，==是不能访问对象内部的值的，此时我们可以在对象public中声明
// friend bool operator ==(const BankAccount& a1, const BankAccount& a2);
//这种情况下，== 就可以直接访问对象了

/*

bool operator ==(const BankAccount& a1, const BankAccount& a2){
	return a1.balance == a2.balance && a1.name == a2.name;
}


*/