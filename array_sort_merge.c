#include<stdio.h>
int main ()
{
    int a[50], b[50], c[50];
    int n1, n2, i;
    printf("enter the size of first array:");
    scanf("%d", &n1);
    printf("enter the elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("enter the size of second array:");
    scanf("%d", &n2);
    printf("enter the elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    //Merge
    for(i = 0; i < n1; i++)
        c[i] = a[i];
    for(i = 0; i < n2; i++)
        c[i] = b[i];
    printf("Merged array: ");
    for(i = 0; i < n1; i++)
        printf("%d", c[i]);
    
        return 0;
}