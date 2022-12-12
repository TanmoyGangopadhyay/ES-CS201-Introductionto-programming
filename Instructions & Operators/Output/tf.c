#include<stdio.h>

int main(){
    int isSunday = 0;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    int isMonday = 0;
    int israining = 1;
    printf("%d \n", isMonday || israining);

    int x;
     printf("enter num: ");
     scanf("%d", &x);
     printf("%d \n", x>9 && x<100);
    return 0;
}