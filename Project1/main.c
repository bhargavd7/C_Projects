#include <stdio.h>
#include <stdlib.h>

struct Node{

  int val;
  struct Node* left;
  struct Node* right;
};

struct Node* mainRoot;

void addLeftAndRightNodes(struct Node* root, int leftVal, int rightVal)
{
    if(root != NULL)
    {
        root->left = (struct Node*)malloc(sizeof(struct Node));
        root->right = (struct Node*)malloc(sizeof(struct Node));
        root->left->val = leftVal;
        root->right->val = rightVal;
        root->left->left = NULL;
        root->left->right = NULL;
        root->right->left = NULL;
        root->right->right = NULL;
    }
}

void inOrderTreePrint(struct Node* node)
{
    if(node == NULL)
        return;

    inOrderTreePrint(node->left);
    printf("\n\r %d",node->val);
    inOrderTreePrint(node->right);
}

void preOrderTreePrint(struct Node* node)
{
    if(node == NULL)
        return;
    
    printf("\n\r %d",node->val);
    preOrderTreePrint(node->left);
    preOrderTreePrint(node->right);
}

void postOrderTreePrint(struct Node* node)
{
    if(node == NULL)
        return;
    
    postOrderTreePrint(node->left);
    postOrderTreePrint(node->right);
    printf("\n\r %d",node->val);
}

int main(void)
{
    mainRoot = (struct Node*)malloc(sizeof(struct Node));
    mainRoot->val = 1;
    mainRoot->left = NULL;
    mainRoot->right = NULL;
    addLeftAndRightNodes(mainRoot, 2, 3);
    addLeftAndRightNodes(mainRoot->left, 4, 5);
    addLeftAndRightNodes(mainRoot->right, 6, 7);
    printf("\n\r InOrder Tree Printing....");
    inOrderTreePrint(mainRoot);
    printf("\n\r PreOrder Tree Printing....");
    preOrderTreePrint(mainRoot);
    printf("\n\r PostOrder Tree Printing....");
    postOrderTreePrint(mainRoot);
    return 0;
}


