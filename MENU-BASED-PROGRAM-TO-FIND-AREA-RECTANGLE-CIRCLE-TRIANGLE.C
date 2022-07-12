#include <stdio.h>
int main(){
    int ch;
    printf("Press 1 for area of reactangle\nPress 2 for area of circle\nPress 3 for area of triangle\n");
    scanf("%d", &ch);
    int l,br;
    float pi=3.14, r;
    float b,h;
    switch(ch){
        case 1:
            printf("Enter length and breadth\n");
            scanf("%d%d", &l, &br);
            printf("Area is %d", (l*br));
            break;
        case 2:
            printf("Enter radius\n");
            scanf("%f", &r);
            printf("Area is %0.2f", (pi*r*r));
            break;
        case 3:
            printf("Enter base and height\n");
            scanf("%f%f", &b,&h);
            printf("Area is %0.2f\n", (0.5*b*h));
            break;
        default:
            printf("Wrong Choice\n");
            break;
    }
    return 0;
}