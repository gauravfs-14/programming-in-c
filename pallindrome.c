#include<stdio.h>
int main(){
    int a, b, rem, s=0;
    printf("Enter a number\n");
    scanf("%d", &a);
    b=a;
    while(a != 0){
        rem = a%10;
        s = s*10+rem;
        a = a/10;
    }
    if(b == s){
        printf("Pallindrome");
    }
    else{
        printf("Not pallindrome");
    }
    return 0;
}