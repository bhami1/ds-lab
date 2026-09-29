#include <stdio.h>
#include <conio.h>

float area_of_rectangle(float l, float b)
{
    return l * b;
}

float area_of_circle(float r)
{
    return 3.14f * r * r;
}

float area_of_square(float a)
{
    return a * a;
}

int main()
{
    float l, b, r ,a;

    // Area of rectangle
    printf("Enter length and breadth of rectangle: " , l,b);
    scanf("%f %f", &l, &b);

    printf("Area of rectangle is %f\n", area_of_rectangle(l, b));

    // Area of circle
    printf("Enter radius of circle: " ,r);
    scanf("%f", &r);

    printf("Area of circle is %f\n", area_of_circle(r));

    // Area of square 
    printf("enter side : " , a);
    scanf( "%f" , &a);
    printf(" Area of square is %f \n" , area_of_square(a));


    return 0;
}
