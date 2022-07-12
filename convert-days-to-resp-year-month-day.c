#include <stdio.h>
int main(){
    int days, year, month, rem;
    printf("Enter days\n");
    scanf("%d", &days);
    year = days/365;
    rem = days%365;
    month = rem /30;
    days = rem%30;
    printf("%d Years %d Months %d Days\n", year, month, days);
    return 0;
}