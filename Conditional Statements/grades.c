#include<stdio.h>

int main(){
    int marks;
    printf("enter marks \n");
    scanf("%d", &marks);

    if(marks >=90 && marks <= 100) {
        printf("You have got A+");
    } 
    else if (marks >=70 && marks < 90){
        printf("You have got A");
    }
    else if (marks >=30 && marks < 70){
        printf("You have got B");
    }
    else if (marks <30) {
        printf("You have got C");
    }

    else {
        printf("invalid marks");
    }

    return 0;
}