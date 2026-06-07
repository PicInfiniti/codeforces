#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[50];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int s = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[i] > 0){
            s++;
        }
    }
    printf("%d\n", s);
    return 0;
}