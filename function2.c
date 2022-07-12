//with return type without arguments
#include<stdio.h>
int sum(void);
int main(){
    printf("Sum is %d", sum());
    return 0;
}
int sum(){
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a,&b);
    return a+b;
}