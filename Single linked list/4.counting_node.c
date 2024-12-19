#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function declaration
void count_of_nodes(struct node *head);

int main() {
    struct node *head = NULL; // Initialize head to NULL (empty list)
    count_of_nodes(head);     // Call the function
    return 0;                 // Return 0 to indicate successful execution
}

void count_of_nodes(struct node *head) {
    int count = 0;

    if (head == NULL) {
        printf("Linked List is empty\n");
        return; // Exit the function if the list is empty
    }

    struct node *ptr = head;  // Start with the head of the list
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;      // Move to the next node
    }

    printf("Number of nodes: %d\n", count); // Print the count
}
