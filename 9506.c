#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    while (1) {
        int* b = NULL;
        int count = 0, total = 0;

        scanf("%d", &a);
        if (a == -1) break;

        for (int i = 1; i < a; i++) {
            if (a % i == 0) {
                count += 1;
                int* temp = (int*)realloc(b, count * sizeof(int));
                if (temp == NULL) {
                    printf("Memory allocation failed\n");
                    free(b);
                    return 1;
                }
                b = temp;
                b[count - 1] = i;
                total += i;
            }
        }

        if (a == total) {
            printf("%d = ", a);
            for (int c = 0; c < count; c++) {
                printf("%d", b[c]);
                if (c != count - 1) printf(" + ");
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", a);
        }

        free(b);
        b = NULL;
    }
    return 0;
}
