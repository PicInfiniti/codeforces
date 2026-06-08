#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    puts(n%4*n%7*n%47*n%477 > 0 ? "NO" : "YES");
    return 0;
}