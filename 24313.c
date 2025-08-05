#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a1, a2, c, n0;
	scanf("%d %d", &a1, &a2);
	scanf("%d", &c);
	scanf("%d", &n0);

	if (a1 <= c && a1 * n0 + a2 <= c * n0) {
		printf("1\n");
	} else {
		printf("0\n");
	}
}
