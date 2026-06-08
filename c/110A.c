#include <stdio.h>

int main() {
    char n[20];
    int c = 0;
    
    scanf("%19s", n);
    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '4' || n[i] == '7') {
            c++;
        }
    }
    if (c == 4 || c == 7) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}