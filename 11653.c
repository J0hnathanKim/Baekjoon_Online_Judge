#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            printf("%d\n", i);
            num /= i;
        }
    }

    if (num > 1) {
        printf("%d\n", num); // 마지막 남은 소수 출력
    }

    return 0;
}
