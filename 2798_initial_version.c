#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    


int main()
{
    int card[100] = { 0, };
    int n = 0;
    int standard = 0;
    
    scanf("%d %d", &n, &standard);
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }
    int comp = abs(card[0] + card[1] + card[2] - standard);
    int total = card[0] + card[1] + card[2];
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (abs(card[i] + card[j] + card[k] - standard) < comp) {
                    comp = abs(card[i] + card[j] + card[k] - standard);
                    total = card[i] + card[j] + card[k]; 
                }
            }
        }
    }
    printf("%d", total);
    return 0;
}
