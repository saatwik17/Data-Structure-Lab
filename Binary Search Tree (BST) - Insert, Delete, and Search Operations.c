#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define MAX_OPS 100


typedef struct Node {
    
    //code here...
    int data;
    struct Node *left, *right;

    
    
} Node;


Node* createNode(int data) {
    
    //code here...
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
    
}


Node* insert(Node *root, int data) {
    
    
    //code here...
    if (root == NULL)
