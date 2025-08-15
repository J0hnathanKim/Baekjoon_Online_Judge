#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int a, b;
        scanf("%d %d", &a, &b);

        a %= 10; // only last digit matters
        if (a == 0) {
            printf("10\n");
            continue;
        }

        int result = 1;
        for (int i = 0; i < b; i++) {
            result = (result * a) % 10;
        }

        printf("%d\n", result);
    }
    return 0;
}
