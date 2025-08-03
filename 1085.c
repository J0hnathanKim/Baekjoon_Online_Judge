#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, w, h, distance_x, distance_y, distance;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	distance_x = x <= w - x ? x : w - x;
	distance_y = y <= h - y ? y : h - y;
	distance = distance_x <= distance_y ? distance_x : distance_y;
	printf("%d", distance);
}
