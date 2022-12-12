#include<stdio.h>

int main(){
    printf("%d \n", 2 < 4 && 3 < 1);
    printf("%d \n", 2 < 4 || 3 < 1);
    printf("%d \n", !((2 < 4) && (3 < 1)));
    return 0;
}