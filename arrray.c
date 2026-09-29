#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, arr, i, item, c;
    printf("enter the array limit");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("enter the array elements");
    for (i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    
}
