// Lec//

#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;


void printBinary(int digits,string prefix) {
	
	if (digits == 0) {
		cout << prefix << endl;
	}
	else {
		printBinary(digits - 1, prefix + "0");
		printBinary(digits - 1, prefix + "1");
	}
}



void printDecimal(int digits, string prefix) {
	if (digits == 0) {
		cout << prefix << endl;
	}
	else {
		for (int i = 0; i < 10; i++) {
			printDecimal(digits - 1, prefix + to_string(i));
		}

	}
}



//如果想让整个函数变成一个输出结果,可以搞两个函数，一个函数传参，一个函数操作
void permutation(string s,string ans,vector<string>& v) {

	if (s.length() == 0) {
		v.push_back(ans);
	}
	else {
		for (int i = 0; i < s.length(); i++) {
			string nextrec = s.substr(0, i) + s.substr(i + 1);
			permutation(nextrec, ans + s[i],v);
		}
	}
}

vector<string> permutationhelper(string s, string ans) {
	vector<string> temp;
	permutation(s, ans, temp);
	return temp;
}

int main()
{
	//printBinary(4,"");
	//printDecimal(3, "");
	
	int length = permutationhelper("MARTY", "").size();

	for (int i = 0; i < length; i++) {
		cout << permutationhelper("MARTY", "")[i] << endl;
	}
	
}

