#include <stdio.h>
#include <stdlib.h>  // abs 대신 llabs 사용 가능

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", llabs(a - b));
    return 0;
}
