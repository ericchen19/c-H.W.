#include <iostream>
using namespace std;

int main() {
    float money;
    cout << "總共有多少錢呢：";
    cin >> money;
    int total = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;

    while (money != 0) {
        if (money < 0) {
            cout << "錯誤";
            exit(0);   // 強制結束            
        } else if (money >= 1000) {
            cout << "1000 X1\n";
            money = money - 1000;
            a++;
        } else if (money >= 500) {
            cout << "500 X1\n";
            money = money - 500;
            b++;
        } else if (money >= 100) {
            cout << "10 X1\n";
            money = money - 100;
            c++;
        } else if (money >= 50) {
            cout << "50 X1\n";
            money = money - 50;
            d++;
        } else if (money >= 10) {
            cout << "10 X1\n";
            money = money - 10;
            e++;
        } else if (money >= 5) {
            cout << "5 X1\n";
            money = money - 5;
            f++; 
        } else if (money >= 1) {
            cout << "1 X1\n";
            money--;
            g++;
        } else {
            g++;
            break;
        }
        
    }
    total = total + a + b + c + d + e + f + g;
    cout << "有" << a << "張1000元\n"; 
    cout << "有" << b << "張500元\n"; 
    cout << "有" << c << "張100元\n"; 
    cout << "有" << d << "張50元\n";
    cout << "有" << e << "張10元\n"; 
    cout << "有" << f << "張5元\n"; 
    cout << "有" << g << "張1元\n";
    if (money != 0) {
        cout << "剩餘" << money << "元" << "(多餘的錢算1元)\n";
    }
    cout << "\n>>總共最少需攜帶" << total << "個物品<<";
}
