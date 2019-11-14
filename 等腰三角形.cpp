#include <iostream>
using namespace std;

int main() {
    cout << "請輸入三角形的高:";
    int d;
    cin >> d;
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d - i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
