#include <stdio.h>
int main(){
    int a=0, b=1,c;
    printf("%d\n", a);
    printf("%d\n", b);
    for(int i=1; i<9; i++){
        c=a+b;
        printf("%d\n", c);
        a=b;
        b=c;
    }
    return 0;
}