#include <stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a%2 == 0){
        printf("The given number is even\n");
    }
    else{
        printf("The given number is odd\n");
    }
    return 0;
}