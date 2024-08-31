#include <iostream>
#include <string>
using namespace std;

void nameDiamond(string s) {
    int length = s.length();
    // 打印上半部分
    for (int i = 0; i <= length; i++) {
        cout << s.substr(0, i) << endl;
    }
    // 打印下半部分
    for (int i = length - 1; i >= 0; i--) {
        cout << string(length - i, ' ') << s.substr(length - i) << endl;
    }
}

int main() {
    string name = "MARTY";
    nameDiamond(name);
    return 0;
}
