#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    double x = log((double)b / a) / log(1.5);

    int years = (int)x + 1;

    printf("%d\n", years);

    return 0;
}