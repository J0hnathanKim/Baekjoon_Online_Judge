#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   

int main()
{
	int total = 0;
	int arr[5] = { 0 };
	for (int k = 0; k < 5; k++) {
		scanf("%d", &arr[k]);
		total += arr[k];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int avg = total / 5;
	int mid = arr[2];

	printf("%d\n%d", avg, mid);
}
