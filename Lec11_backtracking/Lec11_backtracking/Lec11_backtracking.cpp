
#include <iostream>
#include <vector>

//有点bug

using namespace std;
/*
function search(decisions):
    If there are decisions left to make:
        //Lets handle one decision ourselves, and the rest by recursion
        For each available choice C for this decision:
        -Choose C
        -Search the remaining decisions that could follow C.
        -Un-choose C (Backtrack!)
    -Otherwise, if there are no more decisions to make:stop
*/

void swap(vector<int>& vec, int i, int j) {
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}


void remove(vector<int>& vec, int index) {
    swap(vec, index, vec.size() - 1);
    vec.pop_back();
}



void diceRollHelper(int dice, vector<int>& chosen) {
    //if there are choices to make:
    //for each value for 
    if (dice == 0) {
        for (int j = 0; j < chosen.size(); j++) cout << chosen[j] <<" ";
    }
    else {
        for (int i = 1; i <= 6; i++) {
            chosen.push_back(i);

            diceRollHelper(dice - 1, chosen);

            remove(chosen,chosen.size()-1);
        }
    }
}


void dice_Roll(int n) {
    vector<int> v;
    diceRollHelper(n, v);
}


int main()
{
    dice_Roll(2);
}

