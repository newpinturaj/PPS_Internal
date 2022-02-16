#include <stdio.h>

int main()
{
    printf("\nNumber are: ");
    for(int i = 1; i<1001; i++)
    {
        if(i%4 == 0 && i%10 == 0)
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}