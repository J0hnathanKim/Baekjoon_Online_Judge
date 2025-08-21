#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[100];
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 65 && str[i] <= 90) str[i] += 32;
		else str[i] -= 32;
	}
	cout << str;
}
