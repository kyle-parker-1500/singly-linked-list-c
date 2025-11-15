#include<stdio.h>
#include<stdlib.h>
/*
 * UNFINISHED (2025-08-13): A program that attempts to create a circular singly linked list.
 */
struct Node {
    int value;
    struct Node* next;
};

void testList() {
    // create nodes
    struct Node* head = NULL;
    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));    
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));    
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));    
    
    // assign data to nodes
    node1->value = 1;
    node2->value = 2;
    node3->value = 3;

    // link the nodes
    node1->next = node2; // node2 points to itself!!!!
    node2->next = node3;
    node3->next = NULL;

    // set head
    head = node1;

    // traverse and print list
    struct Node* current; // basically i in the for loop
    current = head;
    while (current != NULL) {
        printf("Value: %d\n", current->value);
        current = current->next; // set pointer to the pointer of the next node
    }   
}

int main() {
    testList();
    
    return 0;
}
