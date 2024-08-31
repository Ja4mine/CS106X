
#include <iostream>
#include <set>
using namespace std;

//operator overloading 运算符重载

struct date {
    int value1;
    int value2;
};

bool operator <(set<date>& a, set<date>& b) {
    return a > b || a > b && a == b;
}// 将 >，< 意义重载

int main()
{
    std::cout << "Hello World!\n";
}

