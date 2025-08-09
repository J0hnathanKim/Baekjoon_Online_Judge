#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

// 비교 함수
int comparePoints(const void* a, const void* b) {
    Point* p1 = (Point*)a;
    Point* p2 = (Point*)b;
    
    if (p1->x != p2->x) 
        return p1->x - p2->x; // x 기준 오름차순
    return p1->y - p2->y;     // x 같으면 y 기준 오름차순
}

int main() {
    Point* points;
    int count;

    scanf("%d", &count);

    points = malloc(sizeof(Point) * count);
    if (points == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    // qsort로 정렬
    qsort(points, count, sizeof(Point), comparePoints);

    for (int i = 0; i < count; i++) {
        printf("%d %d\n", points[i].x, points[i].y);
    }

    free(points);
    return 0;
}
