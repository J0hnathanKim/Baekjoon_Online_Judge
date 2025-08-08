#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a;
	int i = 0;
	int arr[12];
	scanf("%d", &a);
	do {
		int b = a % 10;
		a = a / 10;
		arr[i] = b;
		i++;
	} while (a != 0);

	for (int j = 0; j < i; j++) {
		for (int k = j + 1; k < i; k++) {
			if (arr[j] < arr[k]) {
				int temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	for (int z = 0; z < i; z++) {
		printf("%d", arr[z]);
	}
}
