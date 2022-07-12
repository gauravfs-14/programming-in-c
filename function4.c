//with return type and with argument
#include<stdio.h>
int sum(int, int);
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Sum is %d", sum(a,b));
}
int sum(int a,int b){
    return a+b;
}