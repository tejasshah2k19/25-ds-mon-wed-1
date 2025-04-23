#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;

} ;

int main(){

    struct node  *root = NULL; 
    
    root = malloc(sizeof(struct node));
    root->data = 30; 
    root->left = NULL;
    root->right = NULL;
   
    struct node *rootLeft = malloc(sizeof(struct node));
    rootLeft->data = 20 ;
    rootLeft->left = NULL;
    rootLeft->right = NULL; 
    root->left = rootLeft; 

    struct node *rootRight = malloc(sizeof(struct node));
    rootRight->data = 50;
    rootRight->left = NULL;
    rootRight->right=NULL ;
    root->right = rootRight; 
    
    printf(" %d %d %d ",root->data,root->left->data,root->right->data);

}