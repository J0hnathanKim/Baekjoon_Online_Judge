#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == number) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("0\n");
    return 0;
}
