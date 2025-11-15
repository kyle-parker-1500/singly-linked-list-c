#include<stdio.h>
#include<stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

void setNode(struct Node* node, struct Node* nextNode, int value) {
    node->value = value;
    node->next = nextNode;
}

void printList(struct Node* head) {
    struct Node* current;
    current = head;
    for (current = head; current != NULL; current = current->next) {
        printf("Value: %d\n", current->value);
    }
}

int main() {
    // create nodes
    struct Node* head = NULL;
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n5 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n6 = (struct Node*)malloc(sizeof(struct Node));

    // create head
    head = n1; 
    // create nodes
    setNode(n1, n2, 1); // n2 points to itself
    setNode(n2, n3, 2);
    setNode(n3, n4, 3);
    setNode(n4, n5, 4);
    setNode(n5, n6, 5);
    setNode(n6, NULL, 6);
    
    // traverse list
    printList(head); 

    return 0;
}
