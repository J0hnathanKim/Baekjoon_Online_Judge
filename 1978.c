#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime(int a) {
	int count = 0;
	for (int i = a; i > 0; i--) {
		if (a % i == 0) count += 1;
	}
	if (count == 2) return 1;
	else return 0;
}

int main() {
	int count, total = 0;
	scanf("%d", &count);
	while (count > 0) {
		int a = 0;
		scanf("%d", &a);
		if (prime(a) == 1) total += 1;
		count--;
	}
	printf("%d", total);
}
