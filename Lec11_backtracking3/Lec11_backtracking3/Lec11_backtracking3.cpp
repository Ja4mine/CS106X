// Lec11_backtracking3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。


#include <iostream>
#include <vector>
using namespace std;

struct grid {
public:
    vector<vector<int>> gridtable;
    grid() {
        for (int i = 0; i < 8; i++) {
            gridtable.push_back({ 0,0,0,0,0,0,0,0 });
        }
    }
    
    void set(int i, int j) {
        gridtable[i][j] = 1;
    }
    void clear(int i, int j) {
        gridtable[i][j] = 0;
    }
    int getValue(int i, int j) {
        return gridtable[i][j];
    }

    void printTable() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cout << gridtable[i][j];
            }
            cout << endl;
        }
    }
};

void solveHelper(grid& board) {

}


void solveQueens(grid& board) {

}





int main()
{
   
}
