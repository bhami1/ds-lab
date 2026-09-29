// stack implementation using linked list
#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

struct node 
{
    int data ; 
    struct node *next ;
} ;

struct node *NEW ;
struct node *TOP ;
struct node *temp ;

int main () {
    int value, n;
    NEW = malloc(sizeof(struct node));
    TOP = NULL;
    
    printf ("enter the no.of elements in stack");
    scanf ("%d", &n);
    for (int i =0 ; i <n ; i ++)
    {
        if(TOP == NULL)
        {
            NEW = malloc(sizeof(struct node));
            printf("enter the value");
            scanf("%d", &value);
            NEW->data = value;
            NEW ->next = NULL;
            TOP = NEW;
        }
        else
        {
            NEW = malloc(sizeof(struct node));
            printf("enter the value");
            scanf("%d", &value);
            NEW->data = value;
            NEW ->next = TOP;
            TOP = NEW;
            
        }
    }
    
        
    
    //printf("the value is %d", TOP->data);
    printf( "the entire elements in stack are \n");
    temp = TOP;
    while (temp != NULL)
    {
       // temp = TOP;
        printf("%d\n", temp->data);
        temp = temp->next;
       
    }
    return 0;
}
