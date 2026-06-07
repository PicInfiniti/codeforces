#include <stdio.h>
#include <stdlib.h>

int main() {
    int n[5][5];
    int i, j;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &n[i][j]);
            if (n[i][j] == 1) {
                printf("%d\n", abs(i - 2) + abs(j - 2));
                return 0;
            }
        }
    }
}