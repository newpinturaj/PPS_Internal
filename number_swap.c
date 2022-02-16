#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\nThe value of a = %d and b  = %d\n", a, b);
}