#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	while (a != 0 && b != 0) {
		if (a > b) printf("Yes\n");
		else printf("No\n");
		scanf("%d %d", &a, &b);
	}
}
