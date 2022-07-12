#include <stdio.h>
#include <math.h>
int main(){
    float r,h;
    printf("Enter radius and height\n");
    scanf("%f%f", &r,&h);
    printf("Volume of cylinder is %0.2f", 3.14*r*r*h);
    return 0;
}