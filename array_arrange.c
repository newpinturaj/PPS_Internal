/* working code */

#include <stdio.h>
#define N 100
void swap(int*x, int*y);
int check(int*arr);


int main()
{
    int arr[N], i;
    printf("Enter the integer: ");
    for (i = 0; i<N; i ++)
    {
        scanf("%d", &arr[i]);
    }
    while(check(arr))
    {
        for(i = 0; i<N; i++)
        {
            if(arr[i+1]<arr[i])
            swap(&arr[i+1], &arr[i]);
        }
    }
    printf("\nArranged Number: ");
    for(i = 0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int*x, int*y)
{
    *x = *x^*y;
    *y = *x^*y;
    *x = *x^*y;
}

int check(int*arr)
{
    int found = 0;
    for(int i = 0; i<N; i++)
    {
        if(arr[i+1]<arr[i])
        {
            found = found +1;
        }
        if(found!= 0)
        return 1;

    }
    return 0;
}   