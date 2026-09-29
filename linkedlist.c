#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void insert_at_beginning(struct node **head, int data)
{
    struct node *newnode = malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

void insert_at_end(struct node **head, int data)
{
    struct node *newnode = malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = data;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        return;
    }

    struct node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

void insert_at_position(struct node **head, int data, int position)
{
    if (position < 1)
    {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1)
    {
        insert_at_beginning(head, data);
        return;
    }

    struct node *temp = *head;

    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        return;
    }

    struct node *newnode = malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = data;
    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    int n, choice, position, data;
    struct node *head = NULL;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    printf("Enter the elements of the linked list:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insert_at_end(&head, data);
    }

    printf("The linked list is: ");
    traverse(head);

    printf("\nEnter the operation you want to perform:\n");
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Insert at position\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter the element to insert at the beginning: ");
            scanf("%d", &data);

            insert_at_beginning(&head, data);
            break;

        case 2:
            printf("Enter the element to insert at the end: ");
            scanf("%d", &data);

            insert_at_end(&head, data);
            break;

        case 3:
            printf("Enter the element and position: ");
            scanf("%d %d", &data, &position);

            insert_at_position(&head, data, position);
            break;

        default:
            printf("Invalid choice!\n");
    }

    printf("The linked list after insertion is: ");
    traverse(head);

    return 0;
}
