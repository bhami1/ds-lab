#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {
    int a, new_element,pos;
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("enter your choice\n");
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("enter element to be inserted\n");
            scanf("%d", &new_element);
            printf("enter position to insert\n");
            scanf("%d", &pos);
            for (int i = 9; i > pos; i--) {
                array[i] = array[i-1];
            }
            array[pos]= new_element;
            printf("array after insertion\n");
            for (int i = 0; i < 10; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("enter element to delete\n");
            scanf("%d", &new_element);
            for(int i=0; i <9;i++)
            {
                if (array[i] == new_element) {
                    for (int j = i; j < 9; j++) {
                        array[j] = array[j + 1];
                    }
                    break;
                }
            }
            printf("array after deletion\n");
            for (int i = 0; i < 9; i++) {
                printf("%d ", array[i]);
            }
            break;
        case 3:
            printf("enter element to display its position\n");
            scanf("%d", &new_element);
            for (int i = 0; i < 10; i++) {
                if (array[i] == new_element) {
                    printf("element found at position %d\n", i);
                    break;
                }
                else if (i == 9) {
                    printf("element not found\n");
                }
            }
            
            break;
        case 4:
            printf("enter element to search\n");
            
            break;
        default: 
            printf("invalid input\n");
    
} }