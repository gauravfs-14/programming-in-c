#include <stdio.h>
int main()
{
    int a[10], temp_var;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp_var = a[i];
                a[i] = a[j];
                a[j] = temp_var;
            }
        }
    }
    printf("Array in ascending order is:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}