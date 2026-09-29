#include<stdio.h>
#include<conio.h>
void main() {
    int a,b,c;
    printf ("enter two numbers");
    scanf ("%d %d",&a, &b);
    c = a-b;
    if (c>0)
    {
        printf("%d is greater", a);
    }
    else if (c<0)
    {
        printf ("%d is greater",b);
    }
    else 
    {
        printf("both are equal");
    }
}