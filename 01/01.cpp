#include <iostream>
#include <sstream>
using namespace std;

// 乘法表函數
void multiplicationTable(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i * j << "\t"; // 每個結果用 tab 分隔
        }
        cout << edl; // 換行
    }
}

// 四則運算函數
void arithmeticOperation() {
    string expression;
    cout << "請輸入一個四則運算式 (例如：3+2): ";
    cin >> expression;

    double num1, num2;
    char operation;

    istringstream iss(expression);
    iss >> num1 >> operation >> num2;

    double result = 0;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            cout << "錯誤：不能除以 0" << endl;
            return;
        }
        break;
    default:
        cout << "無效的運算符號" << endl;
        return;
    }

    cout << "結果: " << result << endl;
}

int main() {
    int choice;
    cout << "請選擇功能: 1. n乘法表 2. 四則運算" << endl;
    cin >> choice;

    if (choice == 1) {
        int n;
        cout << "請輸入一個整數 n 來生成 n 乘法表: ";
        cin >> n;
        multiplicationTable(n);
    }
    else if (choice == 2) {
        arithmeticOperation();
    }
    else {
        cout << "無效的選擇" << endl;
    }

    return 0;
}

