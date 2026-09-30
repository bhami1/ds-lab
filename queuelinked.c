#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *FRONT = NULL;
struct Node *REAR = NULL;

void enqueue(int item)
{
    struct Node *newnode;

    newnode = (struct Node *)malloc(sizeof(struct Node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = item;
    newnode->next = NULL;

    if (FRONT == NULL)
    {
        FRONT = newnode;
        REAR = newnode;

        printf("Inserted element is the first node.\n");
    }
    else
    {
        REAR->next = newnode;
        REAR = newnode;

        printf("Inserted element at rear.\n");
    }
}


void dequeue()
{
    struct Node *temp;

    if (FRONT == NULL)
    {
        printf("Queue is empty. No element to delete.\n");
        return;
    }

    temp = FRONT;

    printf("Deleted element: %d\n", FRONT->data);

    FRONT = FRONT->next;

    if (FRONT == NULL)
    {
        REAR = NULL;
    }

    free(temp);
}


void display()
{
    struct Node *temp;

    if (FRONT == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    temp = FRONT;

    printf("Queue elements: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    int choice, item;

    printf("Queue Operations Using Linked List\n");

    while (1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
