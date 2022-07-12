#include <stdio.h>
int main(){
    int a[10];
    printf("Enter 10 numbers\n");
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    printf("You Entered\n");
    for(int i=0; i<10; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}