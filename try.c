/* This is just a try space for cheking the code */

#include <stdio.h>
int check(int* brr);

int check(int*brr)
{
    for(int i = 0; i<5; i++)
    {
        printf("numbers are: %d\n", brr[i]);
    }
    return 5;
}

int main()
{
    int arr[5], y;
    for(int i = 0; i<5; i++)
    scanf("%d", &arr[i]);
    y = check(arr);
    printf("\ncheck: %d and y = %d\n", check(arr), y);
}