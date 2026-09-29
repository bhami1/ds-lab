#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Traverse the linked list
void traverse(struct Node *head) {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Insert at the beginning
void insertBeginning(struct Node **head, int data) {
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
}

// Insert at the end
void insertEnd(struct Node **head, int data) {
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    // If list is empty
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at a given position
// Position starts from 1
void insertPosition(struct Node **head, int data, int position) {
    struct Node *newNode, *temp;
    int i;

    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    // Insert at beginning
    if (position == 1) {
        insertBeginning(head, data);
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    temp = *head;

    // Move to the node before the required position
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position does not exist.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Main function
int main() {
    struct Node *head = NULL;

    // Insertion at beginning
    insertBeginning(&head, 20);
    insertBeginning(&head, 10);

    // Insertion at end
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("After insertion at beginning and end:\n");
    traverse(head);

    // Insertion at position 3
    insertPosition(&head, 25, 3);

    printf("\nAfter inserting 25 at position 3:\n");
    traverse(head);

    return 0;
}