#include <stdio.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue()
{
    int item;

    printf("Enter the element: ");
    scanf("%d", &item);

    if (rear == N - 1)
    {
        printf("Queue overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = item;
    }
    else
    {
        rear++;
        queue[rear] = item;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("The deleted element is %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("The deleted element is %d\n", queue[front]);
        front++;   
    }
}

void display()
{
    int i;

    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The elements in the queue are: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);   // Correct: use i
        }

        printf("\n");
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("The front element is %d\n", queue[front]);
    }
}

int main()
{
    int c;

    while (1)
    {
        printf("\nQUEUE: Operation to be performed\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &c);

        switch (c)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid entry\n");
        }
    }

    return 0;
}
