#include<stdio.h>
#include<conio.h>
int main()
{
    // marks average of 6 
    float a,b,c,d,e,f,sum,t,age;
    float avg, percentage;
    printf(" enter the total marks ", t);
    scanf( "%f" , &t);
    printf(" \n enter the marks of english" , a);
    scanf( "%f" , &a);
    printf(" \n enter the marks of maths" , b);
    scanf( "%f" , &b);
    printf(" \n enter the marks of hindi" , c);
    scanf( "%f" , &c);
    printf(" \n enter the marks of physics" , d);
    scanf( "%f" , &d);
    printf(" \n enter the marks of chemistry" , e);
    scanf( "%f" , &e);
    printf(" \n enter the marks of computer" , f);
    scanf( "%f" , &f);
    sum = a+b+c+d+e+f;
    avg = sum/6;
    printf( " the average is %f", avg);
    // percentage 
    percentage = (sum/t )*100;
    printf(" \n the percentage is %f", percentage);
    // voting eligibilty 
    printf ("\n enter the age of the student",age);
    scanf("%f", &age);
    if (age>=18)
    {
        printf("you are eligible to vote");
    }
    else 
    {
        printf("you aree not eligible to vote");
    }
    return 0; 
}