#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addNum(string a, string b);

int main() {
    string a, b;
    cin >> a >> b;

    string sum = addNum(a, b);
    cout << sum;
    return 0;
}

string addNum(string a, string b) {
    string res;

    // 큰 수로 자릿수 맞추기
    int maxLen = max(a.length(), b.length());
    a = string(maxLen - a.length(), '0') + a;
    b = string(maxLen - b.length(), '0') + b;

    int carry = 0; // 올림
    for (int i = maxLen - 1; i >= 0; i--) {
        int digitSum = (a[i] - '0') + (b[i] - '0') + carry; // 각 자릿수 계산
        carry = digitSum / 10;  // 올림 계산
        res += (digitSum % 10) + '0'; // 자릿수를 결과에 더함
    }

    // 연산을 모두 마친 후에 올림 값이 남아있다면 올림 값을 결과에 더해줌
    if (carry > 0) res += carry + '0';

    // 결과를 뒤집어 출력하면 원하는 연산 결과를 얻을 수 있음
    reverse(res.begin(), res.end());

    return res;
}







