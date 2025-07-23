#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
main() {
	char words[100];
	int group_words = 0;
	int word_num = 0;

	scanf("%d", &word_num);
	group_words = word_num;
	while (word_num >= 1) {
		scanf("%s", words);
		for (int i = 0; i < strlen(words); i++) {
			if (words[i] != words[i + 1]) {
				for (int a = strlen(words) - 1; a > i + 1; a--) {
					if (words[a] == words[i]) {
						group_words -= 1;
						i = strlen(words);
						break;
					}
				}
			}
		}
		--word_num;
	}
	printf("%d", group_words);
}
