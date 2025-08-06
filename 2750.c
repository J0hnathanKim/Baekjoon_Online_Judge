#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   

int main()
{
	int a = 0;
	int arr[1000] = { 0 };
	scanf("%d", &a);
	for (int k = 0; k < a; k++) {
		scanf("%d", &arr[k]);
	}
	for (int i = 0; i < a; i++) {
		for (int j = i+1; j < a; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int z = 0; z < a; z++) {
		printf("%d\n", arr[z]);
	}
}
