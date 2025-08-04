#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x;
	int y;
} point;

int main() {
	point p[100000];
	int count = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &p[i].x, &p[i].y);
	}

	int xmax = p[0].x;
	int xmin = p[0].x;
	int ymax = p[0].y;
	int ymin = p[0].y;

	for (int a = 1; a < count; a++) {
		if (p[a].x > xmax) xmax = p[a].x;
		if (p[a].x < xmin) xmin = p[a].x;
		if (p[a].y > ymax) ymax = p[a].y;
		if (p[a].y < ymin) ymin = p[a].y;
	}

	int total = (xmax - xmin) * (ymax - ymin);
	printf("%d\n", total);
	return 0;
}
