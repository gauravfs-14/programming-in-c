#include<stdio.h>
int greatest(int, int, int);
int main(){
    int a, b, c;
    printf("Enter numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Gretest number: %d\n", greatest(a, b, c));
    return 0;
}
int greatest(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}