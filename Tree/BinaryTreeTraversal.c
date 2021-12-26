#include <stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *left, *right;
};

struct node* newNode(int data){
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp->key = data;
    temp->left = temp->right = NULL;
    return temp;
};

struct node* insert(struct node* node, int data){
    if (node == NULL){
        return newNode(data);
    }

    if (data < node->key){
        node->left = insert(node->left, data);
    }else{
        node->right = insert(node->right, data);
    }
    return node;
}

    // Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->key);
  inorderTraversal(root->right);
}

// preorderTraversal traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->key);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// postorderTraversal traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->key);
}

int main(void){
    int size = 0,item = NULL;

    printf("Enter Tree Size: ");
    scanf("%d",&size);

    struct node *bst = newNode(11);

    insert(bst, 6);
    insert(bst, 7);
    insert(bst, 8);
    insert(bst, 9);
    insert(bst, 2);

    // for(int i=0; i<size; i++){
    //     scanf("%d",item);
    //     insert(bst, item);
    // }
    inorderTraversal(bst);
    printf("\n");
    postorderTraversal(bst);
    printf("\n");
    preorderTraversal(bst);
    return 0;
}