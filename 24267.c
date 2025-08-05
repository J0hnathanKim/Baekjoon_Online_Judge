#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	long long count = n * (n - 1) * (n - 2) / 6;
	printf("%lld\n", count);
	printf("3\n"); // 시간복잡도 최고차항 차수는 3
}
