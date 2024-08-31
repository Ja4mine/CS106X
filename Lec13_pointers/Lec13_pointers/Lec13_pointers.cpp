
#include <iostream>
#include <vector>
using namespace std;

//在c++ & 被称为内存地址操作符，会告诉你，某个变量存储的内存地址在哪里
//0x7f8e28 hexdecimal
//pointer 是一个储存了内存地址的变量
//


struct date {
    int month;
    int day;

    void setMonth(int month) {
        this->month = month;
    }
    void setDay(int day) {
        this->day = day;
    }

    int getDay() {
        return this->day;
    }
    int getDay1() {
        return day;
    }
};

void notes() {
    int x = 42;
    int* p = &x;//p是个指针，指向x的内存地址
    int*& b = p;//b是一个别名，是p的别名，共用一个内存空间。
    cout << p << endl;//内存地址占用的内存空间一般为：如果是一个
    //64位操作系统，一个指针占用64bit的空间，32位操作系统，占用32bit空间
    cout << *p << endl; // * dereference operator，放在pointer之前，获取当前 pointer
    //指向的内存地址中的值
}

void mystery(int a, int& b, int* c) {
    a++; // c = -2
    (*c)--; // b=7
    b += *c; // a += 7// a = 11
    cout << a << " " << b << " " << *c << " " << endl;
    //-2, 11, 7
}



int main()
{
    int a = 4;
    int b = 8;
    int c = -3;

    cout << a << " " << b << " " << c << " " << endl;//4,8,-3
    mystery(c, a, &b);//
    cout << a << " " << b << " " << c << " " << endl;
   

    int* t;//garbage pointer 野指针 一个随机的数

    //4,8,-3
    //-2,11,7
    //11,7,-3


    //pointer to a struct
    date d;
    d.month = 7;
    date* p = &d;
    cout << (*p).month << endl;
    cout << d.month << endl;
    cout << p->month << endl;
    p->month = 13;
    cout << p->day << endl;

    //testing for nullness
    if (p == nullptr);
    if (p);
    if (!p);



}
