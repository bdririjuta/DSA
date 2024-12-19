#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function to display the linked list
void displayList(struct node* head) {
    struct node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL\n"); // Print NULL at the end of the list
}
