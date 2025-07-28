#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int move;
    scanf("%d", &move);

    if (move == 0)
        printf("4");
    else {
        int val = (1 << move) + 1; // 2^move + 1
        printf("%d", val * val);
    }
}
