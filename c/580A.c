#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int s[100000];
    int c = 1;
    int a = 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);

        if (i > 0) {
            if (s[i] >= s[i - 1]) {
                c++;
            } else {
                if (c > a) {
                    a = c;
                }
                c = 1;
            }
        }
    }

    if (c > a) {
        a = c;
    }

    printf("%d\n", a);

    return 0;
}