#include <stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if(a<0){
        printf("The given number is negative\n");
    }
    else if(a>0){
        printf("The given number is positive\n");
    }
    else{
        printf("The given number is zero\n");
    }
    return 0;
}