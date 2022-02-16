#include <stdio.h>


int main()
{
    int a = 4, b = 3;   
    int x = a++*b*++a;
    printf("%d\n", a);
}