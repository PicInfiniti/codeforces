#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int s[100001];
    s[0] = 1;
    long long c = 0;
    for (int i = 1; i <= m; i++) {
        scanf("%d", &s[i]);
        c += s[i] - s[i-1];
        if(s[i]-s[i-1] < 0) {
           c += n;
        }
    }
    printf("%lld\n", c);
    return 0;
}