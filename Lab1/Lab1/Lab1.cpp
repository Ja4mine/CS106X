// Lab1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

struct course {
	float credit;
	float gradef;

	void setGrade(float credit, float gradef) {
		this->credit = credit;
		this->gradef = gradef;
	}

	float getGrade() {
		return this->gradef;
	}
};

vector<course> courseshelper(int number, string grade) {
	vector<course> temp;
	map<string, float> mymap{
		{"A+",4.3},
		{"A",4.0},
		{"A-",3.7},
		{"B+",3.3},
		{"B",3.0},
		{"B-",2.7},
		{"C+",2.3},
		{"C",2.0},
		{"C-",1.7},
		{"F",0}
	};
	
}



int main()
{
	
}

