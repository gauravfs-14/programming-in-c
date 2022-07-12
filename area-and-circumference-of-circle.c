#include <stdio.h>
int main(){
    float r, pi=3.14;
    printf("Enter radius\n");
    scanf("%f", &r);
    printf("Circumference of Circle is %0.2f\n", (2*pi*r));
    printf("Area of circle is %0.2f\n", (pi*r*r));
    return 0;
}