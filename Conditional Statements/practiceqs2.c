#include<stdio.h>

int main(){
       char ch;
    printf("enter character : ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z') {
        printf("upper case\n");
    }
    // ch >= 97 & ch >= 'a' areb same
    else if(ch >= 'a' && ch <= 'z') {
        printf("lower case\n");
    }
    else {
        printf("not english letter\n");
    }
    return 0;
}