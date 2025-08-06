#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>   

int main()
{
	int N, k;
	int arr[1000] = { 0 };
	scanf("%d %d", &N, &k);
	for (int a = 0; a < N; a++) {
		scanf("%d", &arr[a]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	printf("%d", arr[N-k]);
}
