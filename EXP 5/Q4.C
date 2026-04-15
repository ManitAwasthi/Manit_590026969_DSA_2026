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

struct Node* queue[100];
int front = -1, rear = -1;

void enqueue(struct Node* node) {
    if (rear == 99) return;
    if (front == -1) front = 0;
    queue[++rear] = node;
}

struct Node* dequeue() {
    if (front == -1 || front > rear) return NULL;
    return queue[front++];
}

void levelOrder(struct Node* root) {
    enqueue(root);
    while (front <= rear) {
        struct Node* temp = dequeue();
        printf("%d ", temp->data);

        if (temp->left) enqueue(temp->left);
        if (temp->right) enqueue(temp->right);
    }
}

int main() {
    printf("Name: Manit Awasthi\n");

    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    printf("Level Order: ");
    levelOrder(root);

    return 0;
}







Name: Manit Awasthi
Level Order: 1 2 3 

=== Code Execution Successful ===
