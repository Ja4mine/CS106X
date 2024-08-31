// Lec5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <sstream>
#include "stack"
using namespace std;

int main() {
	ostringstream oss("control version of me",ostringstream::ate); // 将初始指针设置在字符串结尾
	string a = "hello world";
	cout << a[1]<< endl;
	cout << oss.str() << endl;
	
	//在开始时，指针指向字符串开头
	oss << 16.9 << " Ounce ";
	cout << oss.str() << endl;

	//这么设置，指针将指向字符串结尾
	
}