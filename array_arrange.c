/* working code */

#include <stdio.h>
void swap(int*x, int*y);
int check(int*arr,int N);

int main()
{
    int N;
    printf("How many integers are there: ");
    scanf("%d", &N);
    int arr[N], i;
    printf("Enter the integer: ");
    for (i = 0; i<N; i ++)
    {
        scanf("%d", &arr[i]);
    }
    while(check(arr, N))
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

int check(int*arr,int N)
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