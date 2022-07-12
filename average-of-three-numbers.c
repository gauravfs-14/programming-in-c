#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter three numbers\n");
    scanf("%f%f%f", &a,&b,&c);
    printf("The average of three numbers is %0.2f", (a+b+c)/3);
    return 0;
}