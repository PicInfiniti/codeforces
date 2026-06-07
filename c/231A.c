#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int s = 0;

    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + b + c >= 2) {
            s++;
        }
    }

    printf("%d\n", s);

    return 0;
}