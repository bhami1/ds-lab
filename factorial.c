#include <stdio.h>
#include <conio.h>

int factorial (int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    int a ; 
    printf("enter a number to find factorial" , a);
    scanf("%d" , &a); 
    printf("fctorial is %d", factorial(a));
    return 0;
}