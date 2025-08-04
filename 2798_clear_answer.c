#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int card[100] = { 0, };
    int n = 0;
    int standard = 0;

    scanf("%d %d", &n, &standard);

    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }

    int total = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = card[i] + card[j] + card[k];
                if (sum <= standard && sum > total) {
                    total = sum;
                }
            }
        }
    }

    printf("%d\n", total);
    return 0;
}
