#include<stdio.h>

int main(){
    int x;
    printf("enter a num\n");
    scanf("%d", &x);
    printf("%d\n", x % 2 == 0);
    return 0;
}