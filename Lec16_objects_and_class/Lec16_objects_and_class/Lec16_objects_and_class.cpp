// Lec16_objects_and_class.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "bankaccount.h"


void note() {
    BankAccount a('t');
    a.setDeposit(15);



// class declaration .h
/*
   #ifndef _classname_h
   #define _classname_h

   class ClassName{
   public:
        ********
   private: 
        type name;
        type name;
        // member variables
   };

   #endif





   const 用法 //const用在函数中，说明，这个函数不会对object造成修改
   1. 
        const int x = 4; //x will always be 4
   2.
        void foo(const BankAccount& ba){ //ba不会被改变
            xxxxxxxxxxx
            }
   3.
        double BankAccount（） const;

        double BankAccount::getBalance() const{
            balance++//这种操作不被允许
            return balance；
        }




*/



}

//例子，第一个，调用的是BankAccount类中的成员函数
void BankAccount::setDeposit(int i) {
    if (i < 0) {
        throw i;
    }
}
//第二个，定义了一个方法
void setDeposit(int deposit) {
    

}


int main()
{   
    //java 语法
    //BankAccount ba1 = new BankAccount('a');
    //c++ 语法
    BankAccount ba('a');
   
}
