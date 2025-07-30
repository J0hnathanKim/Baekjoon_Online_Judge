#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, count = 0;
	int arr[10000] = { 0 };
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			arr[count] = i;
			count += 1;
		}
	}
	if (b > count) printf("%d", 0);
	else printf("%d", arr[b-1]);
}
