#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	f = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2);
	f %= 10;
	printf("%d", f);
}
