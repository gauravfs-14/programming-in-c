#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks\n");
    scanf("%d", &marks);
    if(marks>=80 && marks<=100){
        printf("Distinction\n");
    }
    else if(marks>=60 && marks<80){
        printf("First Division\n");
    }
    else if(marks>=50 && marks<60){
        printf("Second Division\n");
    }
    else if(marks>=40 && marks<50){
        printf("Third Division\n");
    }
    else{
        printf("Fail\n");
    }
    return 0;
}