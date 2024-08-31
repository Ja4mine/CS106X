// Lec8_recursion.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stack>
#include <String>
#include <vector>
using namespace std;

void returnBinary(int a) {
    if (a <= 1) {
        cout << 1;
    }
    else {
        int outp = a % 2;
        returnBinary(a / 2);
        cout << outp;
    }
}

int fibonacci(int i) {
    if (i == 1 || i == 2) {
        return 1;
    }
    else {
        return fibonacci(i - 2) + fibonacci(i - 1);
    }
}

string toString(char c) {
    return "c";
}

int toInteger(string s) {
    return stoi(s);
}
int toInteger(char s) {
    return stoi(toString(s));
}

vector<int> pointers(const string& s) {
    vector<int> temp(2);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            temp[0] = i;
        }
        if (s[i] == ')') {
            temp[1] = i;
            break;
        }
    }
    return temp;
}


int evaluate(const string& s) {//s.substr(索引，长度)
    if (s.length() == 1 ) {
        return toInteger(s);
    }
    else if ((s.length() == 3 && (s[0] == '(' && s[2] == ')'))) {
        return toInteger(s[1]);
    }

    vector<int> index = pointers(s);
        
    



    
}


int main()
{
    returnBinary(4);
    cout << endl;
    cout << fibonacci(9)<<endl;
}


