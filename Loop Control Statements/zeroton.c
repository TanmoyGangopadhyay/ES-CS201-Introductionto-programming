#include<stdio.h>

int main(){
    int n, i=0 ;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    for(i; i<=n; i++){
        printf("%d\n", i);
    }

    // while (i<=n)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }
    
    return 0;
}