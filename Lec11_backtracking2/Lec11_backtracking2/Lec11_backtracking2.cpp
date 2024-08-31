
#include <iostream>
#include <vector>
using namespace std;


void diceSumHelper(int dice, int& sum, vector<int> vec) {
    if (dice == 0) {
        int sums = 0;
        for (int i = 0; i < vec.size(); i++) sums += vec[i];
        if (sums == sum) {
            cout << "{";
            for (int i = 0; i < vec.size(); i++) cout << vec[i] << " ";
            cout << "} " << endl;
        }
    }
    else {
        for (int i = 1; i <= 6; i++) {
            vec.push_back(i);
            diceSumHelper(dice - 1, sum, vec);
            vec.pop_back();

        }
        //choose

        //search and explore

        //un-choice
    }
}

void anotherversion(int dice, const int desire_sum, int cur_sum, vector<int> vec) {
    if (cur_sum == desire_sum && dice == 0) {
        for (int i = 0; i < vec.size(); i++) {
            cout << "{";
            cout << vec[i] << " ";
            cout << "}";
        }
    }
    else {
        for (int i = 1; i <= 6; i++) {
            vec.push_back(i);
            anotherversion(dice - 1, desire_sum, cur_sum += i, vec);
            cur_sum -= i;
            vec.pop_back();
            
        }
    }
}



void diceSum(int dice, int sum) {
    vector<int> vecs;
    //diceSumHelper(dice, sum, vecs);
    anotherversion(dice, sum, 0, vecs);
}



int main_q()
{
    diceSum(2, 5);
}
