#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    


int main()
{
    int card[100] = { 0, };
    int n = 0;
    int standard = 0;
    scanf("%d %d", &n, &standard);
    int comp = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }
    for (int i = 1; i <= n / 2 + n % 2; i++) {
        for (int j = i + 1; j <= n - 1; j++) {
            for (int k = j + 1; j <= n; j++) {
      
            }
        }
    }
    return 0;
}
