//Without return type with arguments
#include<stdio.h>
#include<conio.h>
void sum(int, int);
void main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a,&b);
    sum(a,b);
    getch();
}
void sum(int a, int b){
    printf("Sum is %d", a+b);
}