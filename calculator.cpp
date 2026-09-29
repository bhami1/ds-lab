#include<iostream>
using namespace std;
int main()
{
    int a , b , c ;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    while(true)
    {
        cout<<"\nMenu : \n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"Enter your choice : ";
        int choice ;
        cin>>choice ;
    switch (c)
    {
        case 1:
            c = a + b ;
            cout<<"Sum of two numbers is : "<<c;
            break ;
        case 2:
            c = a - b ;
            cout<<"Difference of two numbers is : "<<c;
            break ;
        case 3:
            c = a * b ;
            cout<<"Product of two numbers is : "<<c;
            break ;
        case 4:
            if (b != 0)
            {
                c = a / b ;
                cout<<"Quotient of two numbers is : "<<c;
            }
            else
            {
                cout<<"Division by zero is not allowed.";
            }
            break ;
        default :
            cout<<"Invalid choice!";
    }
}
}
    
