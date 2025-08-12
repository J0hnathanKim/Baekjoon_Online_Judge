#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 51

int compare(const void* a, const void* b) {
    const char* s1 = *(const char**)a;
    const char* s2 = *(const char**)b;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) return len1 - len2;
    return strcmp(s1, s2);
}

int main() {
    int n;
    scanf("%d", &n);
    char** words = malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        words[i] = malloc(MAX_LEN);
        scanf("%50s", words[i]);
    }

    qsort(words, n, sizeof(char*), compare);

    printf("%s\n", words[0]);
    for (int i = 1; i < n; i++) {
        if (strcmp(words[i], words[i - 1]) != 0) {
            printf("%s\n", words[i]);
        }
    }

    for (int i = 0; i < n; i++) free(words[i]);
    free(words);
    return 0;
}
