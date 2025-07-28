#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int morning, night, height, count;
    scanf("%d %d %d", &morning, &night, &height);

    int effective_per_day = morning - night;

    // When the climber reaches the top during the day, they don't slide down
    height -= morning;

    if (height <= 0) {
        count = 1;  // Reaches the top on the first day
    }
    else {
        // Ceil division: (height + effective_per_day - 1) / effective_per_day
        count = 1 + (height + effective_per_day - 1) / effective_per_day;
    }

    printf("%d", count);
}
