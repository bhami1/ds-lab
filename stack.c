#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

int pop (int stack[], int top) {
    if (top >= 0) {
        printf("Popped element: %d\n", stack[top]);
        top = top - 1;
    } else {
        printf("Stack Underflow\n");
    }
    return top;
}
int push (int stack[], int value, int max_size,int top) { 
    if (top < max_size -1 ) {
        top++;
        stack[top] = value;
    } else {
        printf("Stack Overflow\n");
    }
    return top;   
}
void display (int stack[], int top) {
    if (top >= 0) {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    } else {
        printf("Stack is empty\n");
    }
}

int main () 
{
    int stack[MAX],i;
    int value;
    int top = -1;
    int max_size ;
    printf("Enter the size of the stack: ");
    scanf("%d", &max_size);
    
        for (i = 0; i <max_size; i++) {
            
            printf("Enter the element %d: ", i);
            scanf("%d", &value);
            top=push(stack,value,max_size,top);
        }
        display(stack, top);
        top=pop(stack, top);  
        display(stack, top);
    return 0;
}