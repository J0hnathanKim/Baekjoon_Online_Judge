#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_VALUE 10000

int count[MAX_VALUE + 1] = { 0 };

int main() {
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 1; i <= MAX_VALUE; i++) {
        while (count[i]--) {
            printf("%d\n", i);
        }
    }

    return 0;
}
