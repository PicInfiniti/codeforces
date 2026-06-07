#include <stdio.h>
 
int main() {
  int myNum;
  scanf("%d", &myNum);
  printf(myNum>2 && myNum%2==0 ? "YES" : "NO"); 
  return 0;
}