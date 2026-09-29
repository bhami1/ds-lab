#include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main () 
{
int arr[15] , n , choice, element, position ;
int i, found ;
int *ptr ;
ptr = arr ;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
printf("Enter the elements of the array: ");
for (i = 0; i < n; i++)
{
    scanf("%d", ptr + i);

}
do {
    printf("\nMenu:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("3. Search for an element\n");
    printf("4. Display the array\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position to insert (0 to %d): ", n);
            scanf("%d", &position);
            if (position < 0 || position > n) {
                printf("Invalid position!\n");
                break;
            }
            for (i = n; i > position; i--) {
                *(ptr + i) = *(ptr + i - 1);
            }
            *(ptr + position) = element;
            n++;
            printf("Element inserted successfully.\n");
            break;
        case 2:
            printf("Enter the element to delete: ");
            scanf("%d", &element);
            found = 0;
            for (i = 0; i < n; i++) {
                if (*(ptr + i) == element) {
                    found = 1;
                    for (int j = i; j < n - 1; j++) {
                        *(ptr + j) = *(ptr + j + 1);
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                    break;
                }
            }
            if (!found) {
                printf("Element not found in the array.\n");
            }
            break;
        case 3:
            printf("Enter the element to search: ");
            scanf("%d", &element);
            found = 0;
            for (i = 0; i < n; i++) {
                if (*(ptr + i) == element) {
                    found = 1;
                    printf("Element found at position %d.\n", i);
                    break;
                }
            }
            if (found==0) {
                printf("Element not found in the array.\n");
            }
            break;
        case 4:
            printf("Array elements: ");
            for (i = 0; i < n; i++) {
                printf("%d ", *(ptr + i));
            }
            printf("\n");
            break;
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            break;

} }
while (choice != 5);

return 0;
}