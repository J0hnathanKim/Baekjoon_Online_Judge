#include <stdio.h>
int max(int a, int b, int c) {
	int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	return max;
}

int main() {
	int a, b, c, circumstance;
	scanf("%d %d %d", &a, &c, &b);
	if (a == max(a, b, c) && a >= b + c) {
		circumstance = 2 * (b + c) - 1;
	}
	else if (b == max(a, b, c) && b >= a + c) {
		circumstance = 2 * (a + c) - 1;
	}
	else if (c == max(a, b, c) && c >= a + b) {
		circumstance = 2 * (a + b) - 1;
	}
	else circumstance = a + b + c;

	printf("%d", circumstance);
}
