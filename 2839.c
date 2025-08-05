#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   

int main()
{
	int sugar;
	int total = 1666;
	scanf("%d", &sugar);
	for (int i = 0; i <= 1667; i++) {
		for (int j = 1000; j >= 0; j--) {
			if (3 * i + 5 * j == sugar && i + j < total) total = i + j;
		}
	}
	if (total == 1666) printf("%d", -1);
	else printf("%d", total);
}
