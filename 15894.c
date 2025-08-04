#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned long long int a = 0;
    scanf("%llu", &a);         // long long unsigned → %llu
    printf("%llu", a * 4);     // 마찬가지로 %llu
    return 0;
}
