// Lec4_datacontainer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;


int main(){
	vector<int> vec;
	vec.reserve(5);
	vec = { 1,2,3,4,2 };
	
	int i = 0;
	while (i < vec.size()) {
		cout << vec[i] << endl;
		i++;
	}

	int n = vec.size();//大小
	int m = vec.capacity();//容量
	int max_size = vec.max_size();//最大大小

	vec.resize(10);//重设大小
	int element = 10;
	//都是将元素添加到尾部
	vec.emplace_back(element);
	vec.push_back(element);
	//将元素插入到头部
	vec.insert(vec.begin(), 1);
	//插入任意位置，n是想插入的位置
	vec.insert(vec.begin() + n, 1);

	vector<char> allword(4);
	allword = { 'd','i','c','k' };
	for (int i = 0; i < allword.size(); i++) {
		cout << allword[i] << endl;
	}

	//另一种迭代方式
	for (char chars : allword) {
		cout << chars << endl;
	}
}	
	
