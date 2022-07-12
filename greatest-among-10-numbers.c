#include <stdio.h>
int main(){
    int a[10];
    printf("Enter 10 numbers\n");
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    int greatest =a[0];
    for(int i=0; i<10; i++){
        if(a[i] > greatest){
            greatest = a[i];
        }
    }
    printf("Greatest is %d", greatest);
    return 0;
}