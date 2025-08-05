#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>    

int main()
{
	int blank[100][100] = { 0 };
	int count = 0;
	int area = 0;
	scanf("%d", &count);
	while (count > 0) {
		int a, b;
		scanf("%d %d", &a, &b);
		for (int i = a; i < a + 10; i++) {
			for (int j = b; j < b + 10; j++) {
				if (blank[i][j] == 0) {
					blank[i][j] = 1;
					area += 1;
				}
			}
		}
		count--;
	}
	printf("%d", area);
}
