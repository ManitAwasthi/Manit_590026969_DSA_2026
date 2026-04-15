include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int val) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert
struct Node* insert(struct Node* root, int val) {
    if (root == NULL) return createNode(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);
    else
        printf("Duplicate not allowed\n");

    return root;
}

// Find minimum
struct Node* minValue(struct Node* node) {
    while (node->left != NULL)
        node = node->left;
    return node;
}

// Delete
struct Node* deleteNode(struct Node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Case 1 & 2
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Case 3
        struct Node* temp = minValue(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Search
void search(struct Node* root, int key) {
    if (root == NULL)
        printf("Element not found\n");
    else if (root->data == key)
        printf("Element found\n");
    else if (key < root->data)
        search(root->left, key);
    else
        search(root->right, key);
}

// Inorder
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    printf("Name: Manit Awasthi\n");

    struct Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    printf("Inorder: ");
    inorder(root);

    printf("\nSearch 40: ");
    search(root, 40);

    root = deleteNode(root, 30);
    printf("After deletion: ");
    inorder(root);

    return 0;
}







Name: Manit Awasthi
Inorder: 20 30 40 50 70 
Search 40: Element found
After deletion: 20 40 50 70 

=== Code Execution Successful ===
