// Lec7_sets_hashset.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
struct date {
    int number1;
    int number2;
};


//因为set是有序的，hashset是无序的
//所以在将两个struct放进set里时会报错，可以用运算符重载
int main()
{
    std::cout << "Hello World!\n";
}

