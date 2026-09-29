#include<stdio.h>
#include<conio.h>
int main()
{
    int r,a,l,b,square,rectangle;
    float circle;
    printf("enter all the sidesr, a, l, b ", r , a , l, b);
    scanf(" %d %d %d %d ", &r , &a, &l, &b);
    circle = 2*3.14*r;
    square = a*a;
    rectangle = l*b;
    printf("area of circle is %f" , circle);
    printf("area of square is %d" , square);
    printf("area of rectangle is %d" , rectangle);
    return 0;
}