#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};


struct TreeNode* insertNode(struct TreeNode* root, int val) {
    if (root == NULL) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->val = val;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if (val < root->val) {
        root->left = insertNode(root->left, val);
    } else {
        root->right = insertNode(root->right, val);
    }
    return root;
}

void inorderHelper(struct TreeNode* node) {
    if (node != NULL) {
        inorderHelper(node->left);
        printf("%d ", node->val);
        inorderHelper(node->right);
    }
}

void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
}