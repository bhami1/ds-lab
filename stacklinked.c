#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void insertend(struct node **head, int data)
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
void pop(struct node **head)
{
    if (*head == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    printf("Popped element: %d\n", temp->data);
    free(temp);
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
        insertend(&head, data);
    }
    display(head);
    pop(&head);
    display(head);
    return 0;
}
