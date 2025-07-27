#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int testcase = 0;
    int input = 0;
    int q, d, n, p;

    scanf("%d", &testcase);
    while (testcase > 0) {
        // 센트 단위로 입력
        scanf("%d", &input);

        // 쿼터 (25센트)
        q = input / 25;
        input %= 25;

        // 다임 (10센트)
        d = input / 10;
        input %= 10;

        // 니켈 (5센트)
        n = input / 5;
        input %= 5;

        // 페니 (1센트)
        p = input;

        printf("%d %d %d %d\n", q, d, n, p);
        testcase -= 1;
    }
    return 0;
}
