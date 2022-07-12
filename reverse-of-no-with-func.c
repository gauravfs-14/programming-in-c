#include<stdio.h>
int reverse(int);
int main(){
    int n;
    printf("Enter number");
    scanf("%d", &n);
    printf("Reverse number: %d\n", reverse(n));
    return 0;
}
int reverse(int n){
    int sum=0, remainder;
    while (n != 0) {
        remainder = n%10;
        sum = sum*10+remainder;
        n/=10;
    }
    return sum;
}