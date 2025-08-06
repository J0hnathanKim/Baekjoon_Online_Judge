#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N = 0;
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int j = 0; j < N; j++) {
        scanf("%d", &arr[j]);
    }

    qsort(arr, N, sizeof(int), compare);

    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
