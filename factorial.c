#include <stdio.h>
int main(){
    int a, p=1;
    printf("Enter a number\n");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        p=p*i;
    }
    printf("Factorial is %d", p);
    return 0;
}