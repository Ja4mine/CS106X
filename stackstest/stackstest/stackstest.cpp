// stackstest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stack>
using namespace std;

bool check_function(string& s) {
	stack<char> temp;
	int i = 0;
	while (i < s.length()) {
		if (s[i] == '{' || s[i] == '(') {
			temp.push(s[i]);
			i++;
		}
		else {

			if (!temp.empty() && s[i] == ')' && temp.top() == '(') {
				temp.pop();
				i++;
			}else if (!temp.empty() &&  s[i] == '}' && temp.top() == '{') {
				temp.pop();
				i++;
			}
			else {
				return false;
			}
		}
	}
	return temp.empty();
}


int main()
{
	string s = "(())()()(){{}}{{}}";
	cout << check_function(s) << endl;




}


