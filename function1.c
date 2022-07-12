//User defined function without return type without argument
#include<stdio.h>
#include<conio.h>
void sum(void);
void main(){
    sum();
    getch();
}
void sum(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a,&b);
    printf("Sum is %d", a+b);
}