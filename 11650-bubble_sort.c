#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 사용

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point* points;  // 구조체 포인터 (배열처럼 사용)
    int count;

    scanf("%d", &count);

    // 동적 메모리 할당
    points = (Point*)malloc(sizeof(Point) * count);
    if (points == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 예시 입력
    for (int i = 0; i < count; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    // 예시 출력
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (points[i].x > points[j].x) {
                int temp1 = points[i].x;
                int temp2 = points[i].y;
                points[i].x = points[j].x;
                points[i].y = points[j].y;
                points[j].x = temp1;
                points[j].y = temp2;
            }
            else if (points[i].y > points[j].y) {
                int temp = points[i].y;
                points[i].y = points[j].y;
                points[j].y = temp;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", points[i].x, points[i].y);
    }



    free(points); // 메모리 해제

    return 0;
}
