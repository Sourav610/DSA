#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Bst;

Bst *createNode(int data){
    Bst *p = (Bst *)malloc(sizeof(Bst));
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    return p;
}

void Inorder(Bst *root){
    if(root != NULL){
        Inorder(root->left);
        printf("%d ",root->data);
        Inorder(root->right);
    }
}
void preorder(Bst *root){
    if(root != NULL){
        printf("Element: %d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Bst *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("Element: %d\n",root->data);
    }
}

int isBST(Bst *root){
    static struct node *prev = NULL;
    if(root != NULL){
        if(!isBST(root->left)){
            return 0;  //0 means false, 1 means true
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);

    }
    else{
        return 1;
    }
}
int main(){
    Bst *p, *p1, *p2,*p3,*p4;
    p = createNode(5);
    p1 = createNode(3);
    p2 = createNode(6);
    p3 = createNode(1);
    p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    //preorder(p);
    Inorder(p);
    printf("\n");
    preorder(p);
    printf("%d",isBST(p));
    postorder(p);
    
    return 0;
}