#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

struct Node* stack[100];
int top = -1;

void push(struct Node* node) {
    stack[++top] = node;
}

struct Node* pop() {
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}

void inorder(struct Node* root) {
    struct Node* curr = root;
    while (curr != NULL || !isEmpty()) {
        while (curr != NULL) {
            push(curr);
            curr = curr->left;
        }
        curr = pop();
        printf("%d ", curr->data);
        curr = curr->right;
    }
}

void preorder(struct Node* root) {
    if (root == NULL) return;
    push(root);

    while (!isEmpty()) {
        struct Node* temp = pop();
        printf("%d ", temp->data);

        if (temp->right) push(temp->right);
        if (temp->left) push(temp->left);
    }
}

int main() {
    printf("Name: Manit Awasthi\n");

    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    printf("Non-Recursive Inorder: ");
    inorder(root);

    printf("\nNon-Recursive Preorder: ");
    preorder(root);

    return 0;
}







Name: Manit Awasthi
Non-Recursive Inorder: 2 1 3 
Non-Recursive Preorder: 1 2 3 

=== Code Execution Successful ===
