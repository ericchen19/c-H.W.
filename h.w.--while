#include <iostream>
using namespace std;

int main() {         //班級單科計分器
    cout << "科目:";        //輸入科目名稱
    string subject;
    cin >> subject;
    
    cout << "(注意:停止輸入請將下一號的成績輸入:9999  \nex.第48號學生是最後一號，請在49號成績欄輸入9999以停止迴圈)";
    
    float total = 0;
    int i = 0;
    
    while (true) {
        cout << "\n第" << i + 1 << "號" << subject << "成績：";
        float testScore;
        cin >> testScore;
        if (testScore == 9999){
            break;
        }
        if (testScore > 100) {
            cout << "\n錯誤成績";
            continue;
        } else if (testScore == 100) {
            cout << "\n滿分！！！";
        } else if (testScore >= 90) {
            cout << "\n考得真好!";
        } else if (testScore >= 80) {
            cout << "\n還不錯，可以更好!";
        } else if (testScore >= 70) {
            cout << "\n有點不應該喔";
        } else if (testScore >= 60) {
            cout << "\n不管怎麼說，你及格了。。。";
        } else if (testScore > 0) {
            cout << "糟了個糕，你不及格...";
        } else {
            cout << "\n錯誤成績";
            continue;  
        }
        total = total + testScore;
        i = i + 1;
    }
    cout << "\n" << subject << "全班總分:" << total;
    cout << "\n" << subject << "全班平均:" << total / i;
}
