#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prime(int a) {
	int count = 0;
	for (int i = a; i > 0; i--) {
		if (a % i == 0) count += 1;
	}
	if (count == 2) return 1;
	else return 0;
}
int main() {
	int minimum = 0, index = 0, total = 0, max = 0, min = 0;
	scanf("%d", &min);
	scanf("%d", &max);
	for (int i = min; i <= max; i++) {
		if (index == 0 && prime(i)) {
			minimum = i;
			index += 1;
		}

		if (prime(i)) total += i;
	}

	if (index == 0) printf("%d", -1);
	else printf("%d\n%d", total, minimum);
}
