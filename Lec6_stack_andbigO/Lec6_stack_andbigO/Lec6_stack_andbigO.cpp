// Lec6_stack_andbigO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <vector>
#include <stack>
#include <queue>
//#include <heap> //没有heap 但是有：
#include <algorithm>
//make_heap(a.begin(), a.end());


//const 关键字，防止对这个数据容器进行改动例如
int main()
{	

	vector<int> a{1,2,3,4};
	
	const int s = a.capacity();
	stack<char> t;
	t.push('s');
	t.top();//peak()

	
	
	
	
	
	
}

//如果我定义另一个函数，要调用这个vector
int computeSum(const vector<int>& a) {
	int sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i];
	}
	return sum;
}

int computeVec(const vector<int>& a) {
	//假如我要修改
	//a.clear();//这个就不行了
	//const 意思是，不要让这个函数修改这个传入的参数
	return 0;
}

