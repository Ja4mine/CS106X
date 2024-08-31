// Lec4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <fstream>
#include <iostream> 
#include <string>
using namespace std;



int main()
{
    cout << "Hello World!\n";
    ifstream input("techathon.txt");
    //or 
    //ifstream input;
    //input.open("example.txt");
    string line;
    int lines = 0;


    if (input.fail()) {
        cout << "no such file" << endl;
    }//getline() 本身也可以作为判断函数是否成功的标志

    //getline(input,line) 方法：从input中获取一行，并将此行存储到line中，
    //如果能获取此行，则整个函数返回true 否则返回false
    while (getline(input, line)) {
        cout << line << endl;
        lines++;
    }
    cout << lines << endl;
   
    //>> 叫做 string extraction operator
    //将内容从 左侧的变量抽出来，放到 右侧的变量里

    int wordcounts = 0;
    string word;
    while (input >> word) {
        cout << word << endl;
        wordcounts++;
    }
    cout << wordcounts << endl;
    input.close();


}

