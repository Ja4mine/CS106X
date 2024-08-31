// Lec9_recursion_combination.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//函数在使用之前必须被声明
void permutationshelper(string s, string ans, vector<string>& vec) {
	if (s.length() == 0) {
		vec.push_back(ans);
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			string nextrec = s.substr(0, i) + s.substr(i + 1);
			permutationshelper(nextrec, ans + s[i], vec);
		}
	}
}

vector<string> permutations(string s, string ans) {
	vector<string> temp;
	permutationshelper(s, ans, temp);
	return temp;
}




int main()
{	
	int length = permutations("LANTIAN", "").size();
	for (int i = 0; i < length; i++) {
		cout << permutations("LANTIAN", "")[i] << endl;
	}
}

