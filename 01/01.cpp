#include <iostream>
using namespace std;

void multiplicationTable(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i * j << "\t"; // 每個結果用 tab 分隔
        }
        cout << endl; // 換行
    }
}

int main() {
    int n;
    cout << "請輸入一個整數 n 來生成 n 乘法表: ";
    cin >> n;
    multiplicationTable(n);
    return 0;
}