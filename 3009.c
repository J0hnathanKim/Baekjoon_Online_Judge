#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct point{
	int x;
	int y;
};

int main() {
	struct point a, b, c, d;
	d.x = 0, d.y = 0;
	scanf("%d %d %d %d %d %d", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
	d.x = a.x == b.x ? c.x : (b.x == c.x ? a.x : b.x);
	d.y = a.y == b.y ? c.y : (b.y == c.y ? a.y : b.y);
	printf("%d %d", d.x, d.y);
}
