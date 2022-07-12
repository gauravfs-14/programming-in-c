#include<stdio.h>
int factorial(int);
int main() { 
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("Factorial: %d\n", factorial(n));
    return 0; 
}
int factorial(int n) {
    int sum = 1;
    for(int i = 1; i <= n; i++) {
        sum=sum*i;
    }
    return sum;
}