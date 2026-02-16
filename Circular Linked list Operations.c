#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node *NODE;

// Create a new node with given data
NODE createNodeInCLL(int data) {
    NODE temp = (NODE) malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Create CLL with n nodes
NODE createCLL(   int n      ) {
NODE first = NULL, temp = NULL, newNode = NULL;
    int data, i;
    for (i = 0; i < n; i++) {
        // Assuming simple input as per standard lab patterns
        // "Read n integers from the user"
        scanf("%d", &data);
        newNode = createNodeInCLL(data);
        
        if (first == NULL) {
            first = newNode;
            newNode->next = first;
        } else {
            temp->next = newNode;
            newNode->next = first;
        }
        temp = newNode;
    }
    return first;
// write your code here...


}

// Traverse CLL
void traverseListInCLL(NODE first        ) {
   if (first == NULL) return;
    NODE temp = first;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("\n");
// write your code here...


}

// Insert at given position in CLL
NODE insertAtPositionInCLL( NODE first, int pos, int data             ) {
NODE newNode = createNodeInCLL(data);
    NODE temp = first;
    int count = 0;
