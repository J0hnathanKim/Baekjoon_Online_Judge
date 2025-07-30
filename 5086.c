#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b = 0;
	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		else if (a % b == 0) printf("multiple\n");
		else if (b % a == 0) printf("factor\n");
		else if (a == 0 && b == 0) break;
		else printf("neither\n");
	}
}
