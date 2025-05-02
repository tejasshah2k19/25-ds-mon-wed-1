#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int num)
{

    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = num;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        if (root->data > num)
        {
            // left
            struct node *tmp = malloc(sizeof(struct node));
            tmp->data = num;
            tmp->left = NULL;
            tmp->right = NULL;
            root->left = tmp;
        }
        else
        {
            // right

            struct node *tmp = malloc(sizeof(struct node));
            tmp->data = num;
            tmp->left = NULL;
            tmp->right = NULL;
            root->right = tmp;
        }

        return root;
    }
}

void inOrder(struct node *root)
{

    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d", root->data);
    }
}

int main()
{

    struct node *root = NULL;

    root = addNode(root, 20);

    addNode(root, 30);
    addNode(root, 15);

    printf(" %d %d %d", root->data, root->left->data, root->right->data); // 20 15 30

    printf("\nInOrder : ");
    inOrder(root);

    printf("\nPreOrder : ");
    preOrder(root);
    
    printf("\nPostOrder : ");
    postOrder(root);
    
    return 0;
}